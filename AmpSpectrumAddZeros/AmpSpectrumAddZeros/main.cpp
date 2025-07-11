#include "amp_spectrum_add_zeros.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CAmpSpectrumAddZeros w;
	w.show();
	return a.exec();
}
