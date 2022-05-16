#ifndef SIGNALSLOT_H
#define SIGNALSLOT_H

#include <QDialog>
#include <QDebug>
#include <QDateTime>


QT_BEGIN_NAMESPACE
namespace Ui { class signalSlot; }
QT_END_NAMESPACE

class signalSlot : public QDialog
{
    Q_OBJECT

public:
    signalSlot(QWidget *parent = nullptr);
    ~signalSlot();

private slots:
    void on_pushButton_2_clicked();

    void  doStuf();

private:
    Ui::signalSlot *ui;
};
#endif // SIGNALSLOT_H
