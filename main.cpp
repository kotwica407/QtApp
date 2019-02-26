/*!
* \file
* \brief Plik glowny main
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera wywolanie glownego
* okna aplikacji
*/
#include "adamowicz_jankiewicz_projekt_pzo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Adamowicz_Jankiewicz_projekt_PZO w;
	w.show();
	return a.exec();
}
