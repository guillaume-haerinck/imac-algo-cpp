#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#define return(return_value) int result=return_value; w->popFunctionCall(result); return result;

MainWindow* w = nullptr;

int power(int value, int n)
{
    NOTIFY_START("power", value, n)

    if (n != 0) {
        return (value * power(value, n - 1));
    } else {
        return 1;
    }
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    MainWindow::instruction_duration = 200;
    w = new PowerWindow(power);
    w->show();

    a.exec();
}
