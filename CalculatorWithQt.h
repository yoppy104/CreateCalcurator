#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CalculatorWithQt.h"

#include <string>

class CalculatorWithQt : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorWithQt(QWidget *parent = Q_NULLPTR);

    void ShowNumber();

private:
    Ui::CalculatorWithQtClass ui;
    std::string input_num;

    void inp_append(std::string num);
};
