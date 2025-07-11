#include "generate_seismic_record.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CGenerateSeismicRecord w;
	w.show();
	return a.exec();
}
