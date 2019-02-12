#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#define return(return_value) int result=return_value; w->popFunctionCall(result); return result;

MainWindow* w = nullptr;

int power(int value, int n)
{
    NOTIFY_START("power", value, n) // notify the call of this function to the MainWindow

	// recursiv power
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    MainWindow::instruction_duration = 200;
    w = new PowerWindow(power);
    w->show();

    a.exec();
}
