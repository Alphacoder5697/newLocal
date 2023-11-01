#include "mainwindow.h"
#include "ui_mainwindow.h"


class list
{
public:
    list(const QString str):m_str(str){}
    void operator()(const QString Str){qDebug()<<Str+m_str;};

private:
    QString m_str;
};


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QObject::connect(ui->pushButton,&QPushButton::pressed,[](){qDebug()<<"pushed;"<<b;});
    QObject::connect(ui->lineEdit,&QLineEdit::textEdited,list("send"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

