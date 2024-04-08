#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <QString>

class Command : public QObject
{
    Q_OBJECT
public:
    explicit Command(QObject *parent = nullptr);
    virtual QString getInfo() = 0;
public slots:
    virtual void Execute() = 0;
};

class Command1 : public Command
{
    Q_OBJECT
public:
    explicit Command1(QObject *parent = nullptr);
    QString getInfo() override;
public slots:
    void Execute() override;
};

class Command2 : public Command
{
    Q_OBJECT
public:
    explicit Command2(QObject *parent = nullptr);
    QString getInfo() override;
public slots:
    void Execute() override;
};

class Command3 : public Command
{
    Q_OBJECT
public:
    explicit Command3(QObject *parent = nullptr);
    QString getInfo() override;
public slots:
    void Execute() override;
};


#endif // COMMAND_H
