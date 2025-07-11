#include "self_cross_correlation.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CSelfCrossCorrelation w;
	w.show();
	return a.exec();
}
