#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    comands.append(new Command1(this));
    comands.append(new Command2(this));
    comands.append(new Command3(this));
    generateButtons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generateButtons()
{
    QVBoxLayout* layout = new QVBoxLayout(ui->centralwidget);
    QPushButton* button;
    for (int i = 0; i < comands.size(); ++i)
    {
        button = new QPushButton(comands[i]->getInfo());
        connect(button, &QPushButton::clicked, comands[i], &Command::Execute);
        layout->addWidget(button);
    }
}
