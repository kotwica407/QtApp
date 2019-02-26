#include "adamowicz_jankiewicz_projekt_pzo.h"

Adamowicz_Jankiewicz_projekt_PZO::Adamowicz_Jankiewicz_projekt_PZO(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(foo()));
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(foo2()));
}

Adamowicz_Jankiewicz_projekt_PZO::~Adamowicz_Jankiewicz_projekt_PZO()
{

}

void Adamowicz_Jankiewicz_projekt_PZO::foo() {
	adduser &w = adduser::getInstance();
	w.exec();
}

void Adamowicz_Jankiewicz_projekt_PZO::foo2() {
	login &w = login::getInstance();
	w.exec();
}