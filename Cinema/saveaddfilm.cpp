#include "saveaddfilm.h"
#include "ui_saveaddfilm.h"
#include <QFileDialog>
#include <QTextStream>
#include <QTextEdit>
#include <QMessageBox>

SaveaddFilm::SaveaddFilm(QWidget *parent) : QWidget(parent),
    ui(new Ui::SaveaddFilm)
{
    ui->setupUi(this);
}

SaveaddFilm::~SaveaddFilm()
{
    delete ui;
}

void SaveaddFilm::recieveData(QString str)
{
    QStringList lst = str.split("*");
    ui->textEdit->setText(lst.at(1) + "\n" + lst.at(0));
    if (lst.size() > 1)
    {
        QImage image1(lst.at(0));
        ui->label->setPixmap(QPixmap::fromImage(image1));
    }
}

void SaveaddFilm::on_pushButton_clicked()
{
    QString str = QFileDialog::getSaveFileName(nullptr, "Сохранение файла", QDir::currentPath(), "*.txt");
          if (str.isEmpty()) {
              QMessageBox::warning(this, "Ошибка!", "Файл не сохранен!");
              return;
          }
          QFile file(str);
          if (file.open(QIODevice::WriteOnly))
          {
              QTextStream(&file) << ui->textEdit->toPlainText();
              file.close();
          }
}

void SaveaddFilm::on_pushButton_2_clicked()
{
    this->close();
}
