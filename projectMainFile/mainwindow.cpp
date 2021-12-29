#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_0_stateChanged(int arg1)
{
    if(ui-> checkBox_0 -> isChecked())
    {
        ui -> checkBox_01 -> setChecked(1);
        ui -> checkBox_02 -> setChecked(1);
        ui -> checkBox_03 -> setChecked(1);
        ui -> checkBox_04 -> setChecked(1);
    }
    else
    {
        ui -> checkBox_01 -> setChecked(0);
        ui -> checkBox_02 -> setChecked(0);
        ui -> checkBox_03 -> setChecked(0);
        ui -> checkBox_04 -> setChecked(0);
    }

}


void MainWindow::on_checkBox_01_stateChanged(int arg1)
{
    if(ui -> checkBox_01 -> isChecked())
    {
        chooseCat[0] = true;
    }
    else
    {
        chooseCat[0] = false;
    }
}

void MainWindow::on_checkBox_02_stateChanged(int arg1)
{
    if(ui -> checkBox_02 -> isChecked())
    {
        chooseCat[1] = true;
    }
    else
    {
        chooseCat[1] = false;
    }


}

void MainWindow::on_checkBox_03_stateChanged(int arg1)
{
    if(ui -> checkBox_03 -> isChecked())
    {
        chooseCat[2] = true;
    }
    else
    {
        chooseCat[2] = false;
    }


}

void MainWindow::on_checkBox_04_stateChanged(int arg1)
{
    if(ui -> checkBox_04 -> isChecked())
    {
        chooseCat[3] = true;
    }
    else
    {
        chooseCat[3] = false;
    }


}



void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(ui -> checkBox_2 -> isChecked())
    {
        chooseCat[4] = true;
    }
    else
    {
        chooseCat[4] = false;
    }



}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(ui -> checkBox_3 -> isChecked())
    {
        chooseCat[5] = true;
    }
    else
    {
        chooseCat[5] = false;
    }


}

void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    if(ui -> checkBox_4 -> isChecked())
    {
        chooseCat[6] = true;
    }
    else
    {
        chooseCat[6] = false;
    }


}

void MainWindow::on_checkBox_5_stateChanged(int arg1)
{
    if(ui -> checkBox_5 -> isChecked())
    {
        chooseCat[7] = true;
    }
    else
    {
        chooseCat[7] = false;
    }

}





