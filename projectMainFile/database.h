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
const QString path = "/Users/bensonchiu/allData/PD110-1-FP/projectMainFile/Database/course.db";
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

QString sqlQueryMaker(bool* chooseCat, QString searchText, QString searchTextType, QVector<int> timeVec)
{
    vector<int> timeNegVec; //負面表列
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < 16; j++)
            timeNegVec.push_back(i*100+j);
    }
    QString query = "select cou_code, dptname, sel_code,class, cou_cname, tea_cname, daytime, clsrom_1, credit, forh, co_select from course where cou_cname is not null and (";
    if(chooseCat[0])
        query += "((year == '1年級') and (sel_code == '必修')) or ";
    if(chooseCat[1])
        query += "((year == '2年級') and (sel_code == '必修')) or ";
    if(chooseCat[2])
        query += "((year == '3年級') and (sel_code == '必修')) or ";
    if(chooseCat[3])
        query += "((year == '4年級') and (sel_code == '必修')) or ";
    if(chooseCat[4])
        query += "((sel_code == '選修') and (dptname == '資管系')) or ";
    if(chooseCat[5])
        query += "(sel_code == '選修') or ";
    if(chooseCat[6])
        query += "(category == 0) or ";
    if(chooseCat[7])
        query += "or (category == 1 or category2 == 1) or ";
    query += "cou_cname = '愛情特訓班')";
    if (searchTextType == "課程名稱")
    {
        query += " and cou_cname like '%" + searchText + "%'";
    }
    if (searchTextType == "教師姓名")
    {
        query += " and tea_cname like '%" + searchText + "%'";
    }
    int vecLen = timeVec.size();
    for (int i = 0; i < vecLen; i++)
    {
        remove(timeNegVec.begin(), timeNegVec.end(), timeVec[i]);
    }
    vecLen = timeNegVec.size();
    query += " and ";
    for (int i = 0; i < vecLen; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            query += "time" + QString::number(j) + " != " + QString::number(timeNegVec[i]) + " and ";
            //over 10 will result in error
        }
    }
    query += "cou_cname is not null;";
    return query;
}

#endif // DATABASE_H
