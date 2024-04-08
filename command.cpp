#include "command.h"
#include "form1.h"
#include "form2.h"
#include "form3.h"

Command::Command(QObject *parent)
    : QObject{parent}
{}




Command1::Command1(QObject *parent)
    : Command(parent)
{}

QString Command1::getInfo()
{
    return "Import Data";
}

void Command1::Execute()
{
    Form1* f = new Form1();
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}


Command2::Command2(QObject *parent)
    : Command(parent)
{}

QString Command2::getInfo()
{
    return "Export Data";
}

void Command2::Execute()
{
    Form2* f = new Form2();
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}


Command3::Command3(QObject *parent)
    : Command(parent)
{}

QString Command3::getInfo()
{
    return "Analyse Data";
}

void Command3::Execute()
{
    Form3* f = new Form3();
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}
