#ifndef COMMENTS_H
#define COMMENTS_H

#include <QMainWindow>

namespace Ui {
class Comments;
}

class Comments : public QMainWindow
{
    Q_OBJECT

public:
    explicit Comments(QWidget *parent = 0);
    ~Comments();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_clicked();

private:
    Ui::Comments *ui;
};

#endif // COMMENTS_H
