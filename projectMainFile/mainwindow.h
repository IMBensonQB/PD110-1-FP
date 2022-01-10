#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QCheckBox>
#include <QString>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_checkBox_0_stateChanged(int arg1);

    void on_checkBox_01_stateChanged(int arg1);
    void on_checkBox_02_stateChanged(int arg1);
    void on_checkBox_03_stateChanged(int arg1);
    void on_checkBox_04_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);
    void on_checkBox_3_stateChanged(int arg1);
    void on_checkBox_4_stateChanged(int arg1);
    void on_checkBox_5_stateChanged(int arg1);



    void on_tt1_0_stateChanged(int arg1);
    void on_tt1_1_stateChanged(int arg1);
    void on_tt1_2_stateChanged(int arg1);
    void on_tt1_3_stateChanged(int arg1);
    void on_tt1_4_stateChanged(int arg1);
    void on_tt1_5_stateChanged(int arg1);
    void on_tt1_6_stateChanged(int arg1);
    void on_tt1_7_stateChanged(int arg1);
    void on_tt1_8_stateChanged(int arg1);
    void on_tt1_9_stateChanged(int arg1);
    void on_tt1_10_stateChanged(int arg1);
    void on_tt1_11_stateChanged(int arg1);
    void on_tt1_12_stateChanged(int arg1);
    void on_tt1_13_stateChanged(int arg1);
    void on_tt1_14_stateChanged(int arg1);
    void on_tt2_0_stateChanged(int arg1);
    void on_tt2_1_stateChanged(int arg1);
    void on_tt2_2_stateChanged(int arg1);
    void on_tt2_3_stateChanged(int arg1);
    void on_tt2_4_stateChanged(int arg1);
    void on_tt2_5_stateChanged(int arg1);
    void on_tt2_6_stateChanged(int arg1);
    void on_tt2_7_stateChanged(int arg1);
    void on_tt2_8_stateChanged(int arg1);
    void on_tt2_9_stateChanged(int arg1);
    void on_tt2_10_stateChanged(int arg1);
    void on_tt2_11_stateChanged(int arg1);
    void on_tt2_12_stateChanged(int arg1);
    void on_tt2_13_stateChanged(int arg1);
    void on_tt2_14_stateChanged(int arg1);
    void on_tt3_0_stateChanged(int arg1);
    void on_tt3_1_stateChanged(int arg1);
    void on_tt3_2_stateChanged(int arg1);
    void on_tt3_3_stateChanged(int arg1);
    void on_tt3_4_stateChanged(int arg1);
    void on_tt3_5_stateChanged(int arg1);
    void on_tt3_6_stateChanged(int arg1);
    void on_tt3_7_stateChanged(int arg1);
    void on_tt3_8_stateChanged(int arg1);
    void on_tt3_9_stateChanged(int arg1);
    void on_tt3_10_stateChanged(int arg1);
    void on_tt3_11_stateChanged(int arg1);
    void on_tt3_12_stateChanged(int arg1);
    void on_tt3_13_stateChanged(int arg1);
    void on_tt3_14_stateChanged(int arg1);
    void on_tt4_0_stateChanged(int arg1);
    void on_tt4_1_stateChanged(int arg1);
    void on_tt4_2_stateChanged(int arg1);
    void on_tt4_3_stateChanged(int arg1);
    void on_tt4_4_stateChanged(int arg1);
    void on_tt4_5_stateChanged(int arg1);
    void on_tt4_6_stateChanged(int arg1);
    void on_tt4_7_stateChanged(int arg1);
    void on_tt4_8_stateChanged(int arg1);
    void on_tt4_9_stateChanged(int arg1);
    void on_tt4_10_stateChanged(int arg1);
    void on_tt4_11_stateChanged(int arg1);
    void on_tt4_12_stateChanged(int arg1);
    void on_tt4_13_stateChanged(int arg1);
    void on_tt4_14_stateChanged(int arg1);
    void on_tt5_0_stateChanged(int arg1);
    void on_tt5_1_stateChanged(int arg1);
    void on_tt5_2_stateChanged(int arg1);
    void on_tt5_3_stateChanged(int arg1);
    void on_tt5_4_stateChanged(int arg1);
    void on_tt5_5_stateChanged(int arg1);
    void on_tt5_6_stateChanged(int arg1);
    void on_tt5_7_stateChanged(int arg1);
    void on_tt5_8_stateChanged(int arg1);
    void on_tt5_9_stateChanged(int arg1);
    void on_tt5_10_stateChanged(int arg1);
    void on_tt5_11_stateChanged(int arg1);
    void on_tt5_12_stateChanged(int arg1);
    void on_tt5_13_stateChanged(int arg1);
    void on_tt5_14_stateChanged(int arg1);
    void on_tt6_0_stateChanged(int arg1);
    void on_tt6_1_stateChanged(int arg1);
    void on_tt6_2_stateChanged(int arg1);
    void on_tt6_3_stateChanged(int arg1);
    void on_tt6_4_stateChanged(int arg1);
    void on_tt6_5_stateChanged(int arg1);
    void on_tt6_6_stateChanged(int arg1);
    void on_tt6_7_stateChanged(int arg1);
    void on_tt6_8_stateChanged(int arg1);
    void on_tt6_9_stateChanged(int arg1);
    void on_tt6_10_stateChanged(int arg1);
    void on_tt6_11_stateChanged(int arg1);
    void on_tt6_12_stateChanged(int arg1);
    void on_tt6_13_stateChanged(int arg1);
    void on_tt6_14_stateChanged(int arg1);

    void on_searchButton_clicked();

    void on_chooseAll_1_stateChanged(int arg1);

    void on_chooseAll_2_stateChanged(int arg1);

    void on_chooseAll_3_stateChanged(int arg1);

    void on_chooseAll_4_stateChanged(int arg1);

    void on_chooseAll_5_stateChanged(int arg1);

    void on_chooseAll_6_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;

    bool chooseCat[8] = {0,0,0,0,0,0,0,0};
    bool timeTableChecked[7][15]= {0};
    QString searchText;
    QString searchTextType;
    QVector<int> timeData;
    QVector<int> timeVec;
    QVector<QString> catagories;



};

#endif // MAINWINDOW_H
