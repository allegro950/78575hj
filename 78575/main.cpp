#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtCore/QString>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QLabel hello;
	QString str("<b>QRtring</b>!");
	str[4] = 'S';
	hello.setText(str);
	hello.show();
	return app.exec();
} 