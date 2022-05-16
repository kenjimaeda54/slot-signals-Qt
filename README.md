# Slot-signals
Aplicar conhecimento de sinal e slot no QT

## Feature
- Qt utiliza sinais e slot como abordagem de conceito calback 
- Um sinal e  emitido a partir de um determinado evento
- Slot e a função que executada  a partir desse sinal
- Existe uma função padrão chamada  [connect](https://doc.qt.io/qt-5/signalsandslots.html) pode ser usada para sinais e slot
- Ideia dessa função é conectar objetos diferentes
- Connect recebe 3 argumentos, slot(neste caso o botão conectar), evento(quando ser clicado), objeto de referência(this, ponteiro referencia essa janela em questão), objeto que sera conectado


```c++

#include "signalslot.h"
#include "./ui_signalslot.h"

signalSlot::signalSlot(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signalSlot)
{
    ui->setupUi(this);
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






```
