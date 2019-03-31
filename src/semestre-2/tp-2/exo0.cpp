#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#define return(return_value) int result=return_value; w->popFunctionCall(result); return result;

MainWindow* w = nullptr;

int sum(int n) {
    NOTIFY_START("sum", n)
    if (n > 1) {
        return(n + sum(n-1));
    }
    return(n);
}

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 200;
    w = new SumWindow(sum);
    w->show();

	return a.exec();
}
