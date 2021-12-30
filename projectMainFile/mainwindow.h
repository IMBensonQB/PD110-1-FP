#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QCheckBox>


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
    void update(QCheckBox *, int num);

private:
    Ui::MainWindow *ui;
    bool chooseCat[8] = {0,0,0,0,0,0,0,0};
    QVector<int> timeData;


};

#endif // MAINWINDOW_H
