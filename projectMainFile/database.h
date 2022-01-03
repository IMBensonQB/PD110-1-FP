#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QApplication>
#include <functional>
using namespace std;
const int CATLEN = 8;
const QString path = "C:\\Users\\user\\Documents\\GitHub\\PD110-1-FP\\projectMainFile\\Database\\course.db";
QSqlDatabase getDatabaseConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    qDebug() << path;
    db.setDatabaseName(path);
    return db;
    /*
    QSqlDatabase db = getDatabaseConnection();
    db.open();
    QSqlQuery query;
    query.exec("INSERT into course (name) values ('test')");
    */
}

typedef QString Queven;

QString sqlQueryMaker(bool* chooseCat, QString searchText, QString searchTextType, QVector<int> timeVec, QVector<QString> categories)
{
    QString query = "select * from course where";
    for (int i = 0; i < CATLEN; i++)
    {

    }//chooseCat
    switch (hash<QString>{}(searchTextType))
    {

    }//search
    int vecLen = timeVec.length();
    for (int i = 0; i < vecLen; i++)
    {

    }
    vecLen = categories.length();
    for (int i = 0; i < vecLen; i++)
    {

    }
    return query;

}

#endif // DATABASE_H
