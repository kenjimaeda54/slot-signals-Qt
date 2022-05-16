#include "signalslot.h"
#include "./ui_signalslot.h"

signalSlot::signalSlot(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signalSlot)
{
    ui->setupUi(this);
    //qual e o slot,funcao do slot,objeto referencia, objeto quero chamar
    //todo botao existe um slot
    //slots sao funcoes qeu sao chamadas a partir de um particular sinal
    //sinal sao eventos
    //singla e slots sao tecnicas de callback
    //connect e um sinal
    connect(ui->btnConnect,&QPushButton::clicked,this,&signalSlot::doStuf); //https://doc.qt.io/qt-5/signalsandslots.html
}

signalSlot::~signalSlot()
{
    delete ui;
}

void signalSlot::doStuf()
{
    qInfo() << "Clicked" << QDateTime::currentDateTime().toString();
    accept();
}


void signalSlot::on_pushButton_2_clicked()
{
    qInfo() << "More stuff";
    doStuf();


}

