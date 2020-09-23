#include "CalculatorWithQt.h"

CalculatorWithQt::CalculatorWithQt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->input_num = "0";

    // Initialize Number
    this->ShowNumber();
}

/*
*   public method
*/

/// <summary>
/// Display Number
/// </summary>
void CalculatorWithQt::ShowNumber() {
    this->ui.result_out->setText(QString::fromLocal8Bit("test"));
}


/*
*   private method
*/

/// <summary>
/// “ü—Í’l‚É”š‚ğ’Ç‰Á‚·‚é
/// </summary>
/// <param name="num"></param>
void CalculatorWithQt::inp_append(std::string num) {
    this->input_num += num;
}
