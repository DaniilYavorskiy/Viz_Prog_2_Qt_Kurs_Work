#include "tickets.h"
#include "ui_tickets.h"
#include <QMessageBox>

#define VVOD_FAM "^[А-Я][а-я]+([а-я])"

Tickets::Tickets(QWidget *parent) : QDialog(parent),
    ui(new Ui::Tickets)
{
    ui->setupUi(this);

    //проверка на ввод фамилии
    QRegExp proverka1(VVOD_FAM);
    QRegExpValidator *valiName = new QRegExpValidator(proverka1, this);
    ui->txt_surname->setValidator(valiName);

    //проверка на чтение БД
    if(connOpen()) {
        qDebug("Connected...");
    }
    else {
        qDebug("Failed to open the database");
    }

    // Создаем объекты QPushButton - отрисовка схемы зала
    //первый ряд
    B1 = new QPushButton("1", this);   B1->setCheckable(true);  B1->setGeometry(105, 170, 35, 20);
    B2 = new QPushButton("2", this);   B2->setCheckable(true);  B2->setGeometry(145, 170, 35, 20);
    B3 = new QPushButton("3", this);   B3->setCheckable(true);  B3->setGeometry(185, 170, 35, 20);
    B4 = new QPushButton("4", this);   B4->setCheckable(true);  B4->setGeometry(225, 170, 35, 20);
    B5 = new QPushButton("5", this);   B5->setCheckable(true);  B5->setGeometry(265, 170, 35, 20);
    B6 = new QPushButton("6", this);   B6->setCheckable(true);  B6->setGeometry(305, 170, 35, 20);
    B7 = new QPushButton("7", this);   B7->setCheckable(true);  B7->setGeometry(345, 170, 35, 20);
    B8 = new QPushButton("8", this);   B8->setCheckable(true);  B8->setGeometry(385, 170, 35, 20);
    B9 = new QPushButton("9", this);   B9->setCheckable(true);  B9->setGeometry(425, 170, 35, 20);
    B10 = new QPushButton("10", this); B10->setCheckable(true); B10->setGeometry(465, 170, 35, 20);
    B11 = new QPushButton("11", this); B11->setCheckable(true); B11->setGeometry(505, 170, 35, 20);
    B12 = new QPushButton("12", this); B12->setCheckable(true); B12->setGeometry(545, 170, 35, 20);
    //второй ряд
    B13 = new QPushButton("13", this); B13->setCheckable(true); B13->setGeometry(105, 200, 35, 20);
    B14 = new QPushButton("14", this); B14->setCheckable(true); B14->setGeometry(145, 200, 35, 20);
    B15 = new QPushButton("15", this); B15->setCheckable(true); B15->setGeometry(185, 200, 35, 20);
    B16 = new QPushButton("16", this); B16->setCheckable(true); B16->setGeometry(225, 200, 35, 20);
    B17 = new QPushButton("17", this); B17->setCheckable(true); B17->setGeometry(265, 200, 35, 20);
    B18 = new QPushButton("18", this); B18->setCheckable(true); B18->setGeometry(305, 200, 35, 20);
    B19 = new QPushButton("19", this); B19->setCheckable(true); B19->setGeometry(345, 200, 35, 20);
    B20 = new QPushButton("20", this); B20->setCheckable(true); B20->setGeometry(385, 200, 35, 20);
    B21 = new QPushButton("21", this); B21->setCheckable(true); B21->setGeometry(425, 200, 35, 20);
    B22 = new QPushButton("22", this); B22->setCheckable(true); B22->setGeometry(465, 200, 35, 20);
    B23 = new QPushButton("23", this); B23->setCheckable(true); B23->setGeometry(505, 200, 35, 20);
    B24 = new QPushButton("24", this); B24->setCheckable(true); B24->setGeometry(545, 200, 35, 20);
    //третий ряд
    B25 = new QPushButton("25", this); B25->setCheckable(true); B25->setGeometry(105, 230, 35, 20);
    B26 = new QPushButton("26", this); B26->setCheckable(true); B26->setGeometry(145, 230, 35, 20);
    B27 = new QPushButton("27", this); B27->setCheckable(true); B27->setGeometry(185, 230, 35, 20);
    B28 = new QPushButton("28", this); B28->setCheckable(true); B28->setGeometry(225, 230, 35, 20);
    B29 = new QPushButton("29", this); B29->setCheckable(true); B29->setGeometry(265, 230, 35, 20);
    B30 = new QPushButton("30", this); B30->setCheckable(true); B30->setGeometry(305, 230, 35, 20);
    B31 = new QPushButton("31", this); B31->setCheckable(true); B31->setGeometry(345, 230, 35, 20);
    B32 = new QPushButton("32", this); B32->setCheckable(true); B32->setGeometry(385, 230, 35, 20);
    B33 = new QPushButton("33", this); B33->setCheckable(true); B33->setGeometry(425, 230, 35, 20);
    B34 = new QPushButton("34", this); B34->setCheckable(true); B34->setGeometry(465, 230, 35, 20);
    B35 = new QPushButton("35", this); B35->setCheckable(true); B35->setGeometry(505, 230, 35, 20);
    B36 = new QPushButton("36", this); B36->setCheckable(true); B36->setGeometry(545, 230, 35, 20);
    //четвертый ряд
    B37 = new QPushButton("37", this); B37->setCheckable(true); B37->setGeometry(105, 260, 35, 20);
    B38 = new QPushButton("38", this); B38->setCheckable(true); B38->setGeometry(145, 260, 35, 20);
    B39 = new QPushButton("39", this); B39->setCheckable(true); B39->setGeometry(185, 260, 35, 20);
    B40 = new QPushButton("40", this); B40->setCheckable(true); B40->setGeometry(225, 260, 35, 20);
    B41 = new QPushButton("41", this); B41->setCheckable(true); B41->setGeometry(265, 260, 35, 20);
    B42 = new QPushButton("42", this); B42->setCheckable(true); B42->setGeometry(305, 260, 35, 20);
    B43 = new QPushButton("43", this); B43->setCheckable(true); B43->setGeometry(345, 260, 35, 20);
    B44 = new QPushButton("44", this); B44->setCheckable(true); B44->setGeometry(385, 260, 35, 20);
    B45 = new QPushButton("45", this); B45->setCheckable(true); B45->setGeometry(425, 260, 35, 20);
    B46 = new QPushButton("46", this); B46->setCheckable(true); B46->setGeometry(465, 260, 35, 20);
    B47 = new QPushButton("47", this); B47->setCheckable(true); B47->setGeometry(505, 260, 35, 20);
    B48 = new QPushButton("48", this); B48->setCheckable(true); B48->setGeometry(545, 260, 35, 20);

    //пятый ряд
    B49 = new QPushButton("49", this); B49->setCheckable(true); B49->setGeometry(105, 290, 35, 20);
    B50 = new QPushButton("50", this); B50->setCheckable(true); B50->setGeometry(145, 290, 35, 20);
    B51 = new QPushButton("51", this); B51->setCheckable(true); B51->setGeometry(185, 290, 35, 20);
    B52 = new QPushButton("52", this); B52->setCheckable(true); B52->setGeometry(225, 290, 35, 20);
    B53 = new QPushButton("53", this); B53->setCheckable(true); B53->setGeometry(265, 290, 35, 20);
    B54 = new QPushButton("54", this); B54->setCheckable(true); B54->setGeometry(305, 290, 35, 20);
    B55 = new QPushButton("55", this); B55->setCheckable(true); B55->setGeometry(345, 290, 35, 20);
    B56 = new QPushButton("56", this); B56->setCheckable(true); B56->setGeometry(385, 290, 35, 20);
    B57 = new QPushButton("57", this); B57->setCheckable(true); B57->setGeometry(425, 290, 35, 20);
    B58 = new QPushButton("58", this); B58->setCheckable(true); B58->setGeometry(465, 290, 35, 20);
    B59 = new QPushButton("59", this); B59->setCheckable(true); B59->setGeometry(505, 290, 35, 20);
    B60 = new QPushButton("60", this); B60->setCheckable(true); B60->setGeometry(545, 290, 35, 20);

    connect(B1, &QPushButton::clicked, this, [=](){ui->txt_places->insert("1 "); B1->setEnabled(false);});   connect(B2, &QPushButton::clicked, this, [=](){ui->txt_places->insert("2 "); B2->setEnabled(false);});
    connect(B3, &QPushButton::clicked, this, [=](){ui->txt_places->insert("3 "); B3->setEnabled(false);});   connect(B4, &QPushButton::clicked, this, [=](){ui->txt_places->insert("4 "); B4->setEnabled(false);});
    connect(B5, &QPushButton::clicked, this, [=](){ui->txt_places->insert("5 "); B5->setEnabled(false);});   connect(B6, &QPushButton::clicked, this, [=](){ui->txt_places->insert("6 "); B6->setEnabled(false);});
    connect(B7, &QPushButton::clicked, this, [=](){ui->txt_places->insert("7 "); B7->setEnabled(false);});   connect(B8, &QPushButton::clicked, this, [=](){ui->txt_places->insert("8 "); B8->setEnabled(false);});
    connect(B9, &QPushButton::clicked, this, [=](){ui->txt_places->insert("9 "); B9->setEnabled(false);});   connect(B10, &QPushButton::clicked, this, [=](){ui->txt_places->insert("10 "); B10->setEnabled(false);});
    connect(B11, &QPushButton::clicked, this, [=](){ui->txt_places->insert("11 "); B11->setEnabled(false);}); connect(B12, &QPushButton::clicked, this, [=](){ui->txt_places->insert("12 "); B12->setEnabled(false);});
    connect(B13, &QPushButton::clicked, this, [=](){ui->txt_places->insert("13 "); B13->setEnabled(false);}); connect(B14, &QPushButton::clicked, this, [=](){ui->txt_places->insert("14 "); B14->setEnabled(false);});
    connect(B15, &QPushButton::clicked, this, [=](){ui->txt_places->insert("15 "); B15->setEnabled(false);}); connect(B16, &QPushButton::clicked, this, [=](){ui->txt_places->insert("16 "); B16->setEnabled(false);});
    connect(B17, &QPushButton::clicked, this, [=](){ui->txt_places->insert("17 "); B17->setEnabled(false);}); connect(B18, &QPushButton::clicked, this, [=](){ui->txt_places->insert("18 "); B18->setEnabled(false);});
    connect(B19, &QPushButton::clicked, this, [=](){ui->txt_places->insert("19 "); B19->setEnabled(false);}); connect(B20, &QPushButton::clicked, this, [=](){ui->txt_places->insert("20 "); B20->setEnabled(false);});
    connect(B21, &QPushButton::clicked, this, [=](){ui->txt_places->insert("21 "); B21->setEnabled(false);}); connect(B22, &QPushButton::clicked, this, [=](){ui->txt_places->insert("22 "); B22->setEnabled(false);});
    connect(B23, &QPushButton::clicked, this, [=](){ui->txt_places->insert("23 "); B23->setEnabled(false);}); connect(B24, &QPushButton::clicked, this, [=](){ui->txt_places->insert("24 "); B24->setEnabled(false);});
    connect(B25, &QPushButton::clicked, this, [=](){ui->txt_places->insert("25 "); B25->setEnabled(false);}); connect(B26, &QPushButton::clicked, this, [=](){ui->txt_places->insert("26 "); B26->setEnabled(false);});
    connect(B27, &QPushButton::clicked, this, [=](){ui->txt_places->insert("27 "); B27->setEnabled(false);}); connect(B28, &QPushButton::clicked, this, [=](){ui->txt_places->insert("28 "); B28->setEnabled(false);});
    connect(B29, &QPushButton::clicked, this, [=](){ui->txt_places->insert("29 "); B29->setEnabled(false);}); connect(B30, &QPushButton::clicked, this, [=](){ui->txt_places->insert("30 "); B30->setEnabled(false);});
    connect(B31, &QPushButton::clicked, this, [=](){ui->txt_places->insert("31 "); B31->setEnabled(false);}); connect(B32, &QPushButton::clicked, this, [=](){ui->txt_places->insert("32 "); B32->setEnabled(false);});
    connect(B33, &QPushButton::clicked, this, [=](){ui->txt_places->insert("33 "); B33->setEnabled(false);}); connect(B34, &QPushButton::clicked, this, [=](){ui->txt_places->insert("34 "); B34->setEnabled(false);});
    connect(B35, &QPushButton::clicked, this, [=](){ui->txt_places->insert("35 "); B35->setEnabled(false);}); connect(B36, &QPushButton::clicked, this, [=](){ui->txt_places->insert("36 "); B36->setEnabled(false);});
    connect(B37, &QPushButton::clicked, this, [=](){ui->txt_places->insert("37 "); B37->setEnabled(false);}); connect(B38, &QPushButton::clicked, this, [=](){ui->txt_places->insert("38 "); B38->setEnabled(false);});
    connect(B39, &QPushButton::clicked, this, [=](){ui->txt_places->insert("39 "); B39->setEnabled(false);}); connect(B40, &QPushButton::clicked, this, [=](){ui->txt_places->insert("40 "); B40->setEnabled(false);});
    connect(B41, &QPushButton::clicked, this, [=](){ui->txt_places->insert("41 "); B41->setEnabled(false);}); connect(B42, &QPushButton::clicked, this, [=](){ui->txt_places->insert("42 "); B42->setEnabled(false);});
    connect(B43, &QPushButton::clicked, this, [=](){ui->txt_places->insert("43 "); B43->setEnabled(false);}); connect(B44, &QPushButton::clicked, this, [=](){ui->txt_places->insert("44 "); B44->setEnabled(false);});
    connect(B45, &QPushButton::clicked, this, [=](){ui->txt_places->insert("45 "); B45->setEnabled(false);}); connect(B46, &QPushButton::clicked, this, [=](){ui->txt_places->insert("46 "); B46->setEnabled(false);});
    connect(B47, &QPushButton::clicked, this, [=](){ui->txt_places->insert("47 "); B47->setEnabled(false);}); connect(B48, &QPushButton::clicked, this, [=](){ui->txt_places->insert("48 "); B48->setEnabled(false);});
    connect(B49, &QPushButton::clicked, this, [=](){ui->txt_places->insert("49 "); B49->setEnabled(false);}); connect(B50, &QPushButton::clicked, this, [=](){ui->txt_places->insert("50 "); B50->setEnabled(false);});
    connect(B51, &QPushButton::clicked, this, [=](){ui->txt_places->insert("51 "); B51->setEnabled(false);}); connect(B52, &QPushButton::clicked, this, [=](){ui->txt_places->insert("52 "); B52->setEnabled(false);});
    connect(B53, &QPushButton::clicked, this, [=](){ui->txt_places->insert("53 "); B53->setEnabled(false);}); connect(B54, &QPushButton::clicked, this, [=](){ui->txt_places->insert("54 "); B54->setEnabled(false);});
    connect(B55, &QPushButton::clicked, this, [=](){ui->txt_places->insert("55 "); B55->setEnabled(false);}); connect(B56, &QPushButton::clicked, this, [=](){ui->txt_places->insert("56 "); B56->setEnabled(false);});
    connect(B57, &QPushButton::clicked, this, [=](){ui->txt_places->insert("57 "); B57->setEnabled(false);}); connect(B58, &QPushButton::clicked, this, [=](){ui->txt_places->insert("58 "); B58->setEnabled(false);});
    connect(B59, &QPushButton::clicked, this, [=](){ui->txt_places->insert("59 "); B59->setEnabled(false);}); connect(B60, &QPushButton::clicked, this, [=](){ui->txt_places->insert("60 "); B60->setEnabled(false);});

    //список фильмов
    ui->comboBox_Film->clear(); ui->comboBox_Film->insertItem(0, "");
    ui->comboBox_Film->insertItem(1, "Я - легенда");
    ui->comboBox_Film->insertItem(2, "1+1");
    ui->comboBox_Film->insertItem(3, "Бегущий в лабиринте");
    ui->comboBox_Film->insertItem(4, "Марсианин");
    ui->comboBox_Film->insertItem(5, "Малефисента");
    ui->comboBox_Film->insertItem(6, "Девушка в поезде");
    ui->comboBox_Film->insertItem(7, "Круэлла");
    ui->comboBox_Film->insertItem(8, "Форд против Феррари");
    ui->comboBox_Film->insertItem(9, "Люси");
    ui->comboBox_Film->insertItem(10, "Дъявол носит Prada");

    //список дат
    ui->comboBox_Date->clear(); ui->comboBox_Date->insertItem(0, "");
    ui->comboBox_Date->insertItem(1, "1 декабря");   ui->comboBox_Date->insertItem(2, "2 декабря");   ui->comboBox_Date->insertItem(3, "3 декабря");
    ui->comboBox_Date->insertItem(4, "4 декабря");   ui->comboBox_Date->insertItem(5, "5 декабря");   ui->comboBox_Date->insertItem(6, "6 декабря");
    ui->comboBox_Date->insertItem(7, "7 декабря");   ui->comboBox_Date->insertItem(8, "8 декабря");   ui->comboBox_Date->insertItem(9, "9 декабря");
    ui->comboBox_Date->insertItem(10, "10 декабря");

    connect(ui->comboBox_Date, SIGNAL(currentIndexChanged(QString)), SLOT(showPosts()));
}

void Tickets::showPosts() {
//расписание Я - легенда
// проверка на выбор дня из списка, день может быть недоступен т.к. нет сеансов на выбранный фильм в этот день
    //ПРОБЛЕМА ПРОВЕРКА СТАВИТСЯ ОДНА ДЛЯ ВСЕХ ФИЛЬМОВ это (ui->comboBox_Film->currentText() == "Я - легенда") как будто не работает
    //просто сделай чтобы для каждого фильма свои дни недоступны были а не одни и те же
/*
    if(ui->comboBox_Film->currentText() == "Я - легенда"){
        ui->comboBox_Date->setItemData(2, QVariant(0), Qt::UserRole - 1); ui->comboBox_Date->setItemData(4, QVariant(0), Qt::UserRole - 1);
        ui->comboBox_Date->setItemData(5, QVariant(0), Qt::UserRole - 1); ui->comboBox_Date->setItemData(7, QVariant(0), Qt::UserRole - 1);
        ui->comboBox_Date->setItemData(8, QVariant(0), Qt::UserRole - 1); ui->comboBox_Date->setItemData(10, QVariant(0), Qt::UserRole - 1);
    }
    else if(ui->comboBox_Film->currentText() == "1+1"){
        //тут надо сбросить как-то Qt::UserRole - 1, ниже код что и выше QVariant(0), приравниваем к нулю и Qt::UserRole - 1 должно сброситься, но нет
        //QVariant newData = 0; ui->comboBox_Date->setItemData(4, newData, Qt::UserRole - 1); //но не получается
        ui->comboBox_Date->setItemData(2, QVariant(), Qt::UserRole - 1); ui->comboBox_Date->setItemData(3, QVariant(), Qt::UserRole - 1);
        ui->comboBox_Date->setItemData(6, QVariant(), Qt::UserRole - 1); ui->comboBox_Date->setItemData(7, QVariant(), Qt::UserRole - 1);
        ui->comboBox_Date->setItemData(9, QVariant(), Qt::UserRole - 1); ui->comboBox_Date->setItemData(10, QVariant(), Qt::UserRole - 1);
    }
*/
    if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(0,"11:30");
        ui->comboBox_Time->insertItem(1,"14:10");
        ui->comboBox_Time->insertItem(2,"18:00");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(67, "");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "3 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(3,"17:50");
        ui->comboBox_Time->insertItem(4,"22:00");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(68, "");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(69, "");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(5,"21:00");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(70, "");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(71, "");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(6,"15:35");
    }
    else if(ui->comboBox_Film->currentText() == "Я - легенда" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(72, "");
    }
//расписание 1+1    
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "1 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(7,"10:00");
        ui->comboBox_Time->insertItem(8,"15:20");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(73, "");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "3 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(74, "");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(9,"10:00");
        ui->comboBox_Time->insertItem(10,"16:00");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(11,"11:00");
        ui->comboBox_Time->insertItem(12,"17:30");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(75, "");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(76, "");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(13,"9:30");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(77, "");
    }
    else if(ui->comboBox_Film->currentText() == "1+1" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(78, "");
    }
//расписание Бегущий в лабиринте
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear();
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "2 декабря") {
         ui->comboBox_Time->clear();
         ui->comboBox_Time->insertItem(14,"10:00");
         ui->comboBox_Time->insertItem(15,"12:00");
         ui->comboBox_Time->insertItem(16,"14:00");
         ui->comboBox_Time->insertItem(17,"16:00");
         ui->comboBox_Time->insertItem(18,"18:00");
         ui->comboBox_Time->insertItem(19,"20:00");
         ui->comboBox_Time->insertItem(20,"22:00");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "3 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(79, "");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(80, "");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(81, "");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(82, "");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(83, "");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(84, "");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(85, "");
    }
    else if(ui->comboBox_Film->currentText() == "Бегущий в лабиринте" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(21,"10:00");
        ui->comboBox_Time->insertItem(22,"12:00");
        ui->comboBox_Time->insertItem(23,"14:00");
        ui->comboBox_Time->insertItem(24,"16:00");
        ui->comboBox_Time->insertItem(25,"18:00");
        ui->comboBox_Time->insertItem(26,"20:00");
        ui->comboBox_Time->insertItem(27,"22:00");
    }
//расписание Марсианин
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(86, "");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(87, "");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "3 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(28,"10:00");
        ui->comboBox_Time->insertItem(29,"14:00");
        ui->comboBox_Time->insertItem(30,"17:30");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(31,"19:00");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(88, "");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(89, "");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(90, "");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(32,"10:00");
        ui->comboBox_Time->insertItem(33,"12:00");
        ui->comboBox_Time->insertItem(34,"14:00");
        ui->comboBox_Time->insertItem(35,"16:00");
        ui->comboBox_Time->insertItem(36,"18:00");
        ui->comboBox_Time->insertItem(37,"20:00");
        ui->comboBox_Time->insertItem(38,"22:00");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(91, "");
    }
    else if(ui->comboBox_Film->currentText() == "Марсианин" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(92, "");
    }
//расписание Малефисента
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(93, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(94, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "3 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(39,"21:00");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(95, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(96, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(97, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(98, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(99, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(100, "");
    }
    else if(ui->comboBox_Film->currentText() == "Малефисента" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(101, "");
    }
//расписание Девушка в поезде
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "1 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(40,"21:00");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(102, "");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "3 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(103, "");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "4 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(41,"10:00");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(104, "");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(105, "");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(106, "");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(107, "");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "9 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(42,"19:00");
    }
    else if(ui->comboBox_Film->currentText() == "Девушка в поезде" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(108, "");
    }
//расписание Круэлла    
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(109, "");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(110, "");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "3 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(43,"13:30");
        ui->comboBox_Time->insertItem(44,"21:00");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(45,"19:00");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(111, "");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(112, "");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(46,"10:00");
        ui->comboBox_Time->insertItem(47,"12:00");
        ui->comboBox_Time->insertItem(48,"14:00");
        ui->comboBox_Time->insertItem(49,"16:00");
        ui->comboBox_Time->insertItem(50,"18:00");
        ui->comboBox_Time->insertItem(51,"20:00");
        ui->comboBox_Time->insertItem(52,"22:00");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(113, "");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(114, "");
    }
    else if(ui->comboBox_Film->currentText() == "Круэлла" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(115, "");
    }

//расписание Форд против Феррари    
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(116, "");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(117, "");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "3 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(53,"23:00");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(54,"22:00");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(118, "");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(119, "");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(120, "");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(121, "");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(55,"10:00");
        ui->comboBox_Time->insertItem(56,"12:00");
        ui->comboBox_Time->insertItem(57,"14:00");
        ui->comboBox_Time->insertItem(58,"16:00");
        ui->comboBox_Time->insertItem(59,"18:00");
        ui->comboBox_Time->insertItem(60,"20:00");
        ui->comboBox_Time->insertItem(61,"22:00");
    }
    else if(ui->comboBox_Film->currentText() == "Форд против Феррари" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(122, "");
    }
//расписание Люси    
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(123, "");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(124, "");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "3 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(125, "");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(62,"21:00");
        ui->comboBox_Time->insertItem(63,"23:00");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(126, "");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(64,"21:00");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(127, "");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(128, "");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(129, "");
    }
    else if(ui->comboBox_Film->currentText() == "Люси" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(130, "");
    }
//расписание Дъявол носит Prada    
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "1 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(131, "");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "2 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(132, "");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "3 декабря") {
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(65,"16:00");
    }    
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "4 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(133, "");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "5 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(134, "");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "6 декабря"){
        ui->comboBox_Time->clear();
        ui->comboBox_Time->insertItem(66,"16:00");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "7 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(135, "");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "8 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(136, "");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "9 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(137, "");
    }
    else if(ui->comboBox_Film->currentText() == "Дъявол носит Prada" and ui->comboBox_Date->currentText() == "10 декабря"){
        ui->comboBox_Time->clear(); ui->comboBox_Time->insertItem(138, "");
    }
}

Tickets::~Tickets()
{
    delete ui;
}

void Tickets::on_pushButton_clicked()
{
    this->close();
}

void Tickets::on_pushButton_2_clicked()
{
    Tickets conn;
    QString Surname, Film, Places, Date_of_session, Time_of_session;
    Surname=ui->txt_surname->text();  
    Film=ui->comboBox_Film->currentText();
    Date_of_session=ui->comboBox_Date->currentText();
    Time_of_session=ui->comboBox_Time->currentText();
    Places=ui->txt_places->text();
    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into booking (Surname, Film, Places, Date_of_session, Time_of_session) values ('"+Surname+"', '"+Film+"', '"+Places+"', '"+Date_of_session+"', '"+Time_of_session+"')");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Успешно!"), tr("Места забронированы!"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Ошибка!"), tr("Фамилия не указана или уже использовалась при бронировании!"));
    }
}


void Tickets::on_pushButton_3_clicked()
{
    ui->txt_surname->clear();
    ui->comboBox_Film->setCurrentIndex(-1);
    ui->comboBox_Date->setCurrentIndex(-1);
    ui->comboBox_Time->setCurrentIndex(-1);
    ui->txt_places->clear();

    //Установка кнопок в состояние невыбранной
    B1->setChecked(false); B2->setChecked(false); B3->setChecked(false); B4->setChecked(false); B5->setChecked(false); B6->setChecked(false); B7->setChecked(false); B8->setChecked(false); B9->setChecked(false); B10->setChecked(false);
    B11->setChecked(false); B12->setChecked(false); B13->setChecked(false); B14->setChecked(false); B15->setChecked(false); B16->setChecked(false); B17->setChecked(false); B18->setChecked(false); B19->setChecked(false); B20->setChecked(false);
    B21->setChecked(false); B22->setChecked(false); B23->setChecked(false); B24->setChecked(false); B25->setChecked(false); B26->setChecked(false); B27->setChecked(false); B28->setChecked(false); B29->setChecked(false); B30->setChecked(false);
    B31->setChecked(false); B32->setChecked(false); B33->setChecked(false); B34->setChecked(false); B35->setChecked(false); B36->setChecked(false); B37->setChecked(false); B38->setChecked(false); B39->setChecked(false); B40->setChecked(false);
    B41->setChecked(false); B42->setChecked(false); B43->setChecked(false); B44->setChecked(false); B45->setChecked(false); B46->setChecked(false); B47->setChecked(false); B48->setChecked(false); B49->setChecked(false); B50->setChecked(false);
    B51->setChecked(false); B52->setChecked(false); B53->setChecked(false); B54->setChecked(false); B55->setChecked(false); B56->setChecked(false); B57->setChecked(false); B58->setChecked(false); B59->setChecked(false); B60->setChecked(false);

    //Установка кнопок опять в состояние доступной
    B1->setEnabled(true); B2->setEnabled(true); B3->setEnabled(true); B4->setEnabled(true); B5->setEnabled(true); B6->setEnabled(true); B7->setEnabled(true); B8->setEnabled(true); B9->setEnabled(true); B10->setEnabled(true);
    B11->setEnabled(true); B12->setEnabled(true); B13->setEnabled(true); B14->setEnabled(true); B15->setEnabled(true); B16->setEnabled(true); B17->setEnabled(true); B18->setEnabled(true); B19->setEnabled(true); B20->setEnabled(true);
    B21->setEnabled(true); B22->setEnabled(true); B23->setEnabled(true); B24->setEnabled(true); B25->setEnabled(true); B26->setEnabled(true); B27->setEnabled(true); B28->setEnabled(true); B29->setEnabled(true); B30->setEnabled(true);
    B31->setEnabled(true); B32->setEnabled(true); B33->setEnabled(true); B34->setEnabled(true); B35->setEnabled(true); B36->setEnabled(true); B37->setEnabled(true); B38->setEnabled(true); B39->setEnabled(true); B40->setEnabled(true);
    B41->setEnabled(true); B42->setEnabled(true); B43->setEnabled(true); B44->setEnabled(true); B45->setEnabled(true); B46->setEnabled(true); B47->setEnabled(true); B48->setEnabled(true); B49->setEnabled(true); B50->setEnabled(true);
    B51->setEnabled(true); B52->setEnabled(true); B53->setEnabled(true); B54->setEnabled(true); B55->setEnabled(true); B56->setEnabled(true); B57->setEnabled(true); B58->setEnabled(true); B59->setEnabled(true); B60->setEnabled(true);
}
