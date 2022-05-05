#include "gui.h"

Gui::Gui(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
    connect(&goButton);
}

void Gui::on_goButton_clicked()
{
    goButton.readyRead();
}

void Gui::showResult()
{
    //qDebug() << port << status;
    //QString result = QString::number(port) + " -> " + QString::number(status);
    resultBrowser->append(result);
}
