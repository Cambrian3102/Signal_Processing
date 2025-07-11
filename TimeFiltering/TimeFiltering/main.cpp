#include "time_filtering.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CTimeFiltering w;
	w.show();
	return a.exec();
}
