#ifndef NFS_H
#define NFS_H

#include <QWidget>

namespace Ui {
class Nfs;
}

class Nfs : public QWidget
{
    Q_OBJECT

public:
    explicit Nfs(QWidget *parent = 0);
    ~Nfs();

signals:
    void newfilms();  // Сигнал для окна newfilms на открытие

private slots:
    void on_pushButton_clicked();

public:
    Ui::Nfs *ui;
};

#endif // NFS_H
