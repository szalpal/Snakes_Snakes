#include "snakes.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Snakes w;
	w.show();
	return a.exec();
}
