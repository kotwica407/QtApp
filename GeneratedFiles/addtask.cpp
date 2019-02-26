#include "addtask.h"

addtask::addtask(QString name, QString lastname, QWidget *parent) : QDialog(parent), nazwisko(lastname), imie(name) {
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(foo()));
	zadania.odczyt_atrybutow(name.toStdString(), lastname.toStdString());
	ui.listWidget->addItem("tak");
	ui.listWidget->addItem("nie");
	tryb = true;
}

addtask::addtask(QString name, QString lastname, int i, QWidget *parent) : QDialog(parent), nazwisko(lastname), imie(name), numer_zadania(i) {
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(foo()));
	zadania.odczyt_atrybutow(name.toStdString(), lastname.toStdString());
	ui.listWidget->addItem("tak");
	ui.listWidget->addItem("nie");
	tryb = false;
	string rok, miesiac, dzien;
	rok = zadania.date[numer_zadania][0] + zadania.date[numer_zadania][1] + zadania.date[numer_zadania][2] + zadania.date[numer_zadania][3];
	miesiac = zadania.date[numer_zadania][5] + zadania.date[numer_zadania][6];
	dzien = zadania.date[numer_zadania][8] + zadania.date[numer_zadania][9];
	istringstream irok(rok);
	istringstream imiesiac(miesiac);
	istringstream idzien(dzien);
	int y, m, d;
	irok >> y;
	imiesiac >> m;
	idzien >> d;
	QDate dd(y,m,d);
	ui.dateEdit->setDate(dd);
	string godzina, minuta;
	godzina = zadania.hour[numer_zadania][0] + zadania.hour[numer_zadania][1];
	minuta = zadania.hour[numer_zadania][3] + zadania.hour[numer_zadania][4];
	istringstream igodzina(godzina);
	istringstream iminuta(minuta);
	int g, mm;
	igodzina >> g;
	iminuta >> mm;
	QTime tt(g, mm);
	ui.timeEdit->setTime(tt);

	ui.lineEdit_3->setText(QString::fromStdString(zadania.imie[numer_zadania]));
	ui.lineEdit_4->setText(QString::fromStdString(zadania.nazwisko[numer_zadania]));
	ui.lineEdit_5->setText(QString::fromStdString(zadania.firma[numer_zadania]));
	ui.lineEdit_6->setText(QString::fromStdString(zadania.stanowisko[numer_zadania]));
	ui.lineEdit_7->setText(QString::fromStdString(zadania.cel[numer_zadania]));
	ui.lineEdit_8->setText(QString::fromStdString(zadania.niezbedne[numer_zadania]));
	ui.lineEdit_10->setText(QString::fromStdString(zadania.telefon[numer_zadania]));
	ui.lineEdit_9->setText(QString::fromStdString(zadania.miejsce[numer_zadania]));
	ui.lineEdit_11->setText(QString::fromStdString(zadania.dodatkowe[numer_zadania]));

	ui.pushButton->setText("Edytuj zadanie");
}

addtask::~addtask()
{

}

void addtask::foo() {
	if (tryb == true) {
		if (ui.listWidget->currentRow() < 0)
			;
		else {
			zadania.date.push_back(ui.dateEdit->date().toString("dd-MM-yyyy").toStdString());
			zadania.hour.push_back(ui.timeEdit->time().toString("HH.mm").toStdString());
			zadania.imie.push_back(ui.lineEdit_3->text().toStdString());
			zadania.nazwisko.push_back(ui.lineEdit_4->text().toStdString());
			zadania.firma.push_back(ui.lineEdit_5->text().toStdString());
			zadania.stanowisko.push_back(ui.lineEdit_6->text().toStdString());
			zadania.cel.push_back(ui.lineEdit_7->text().toStdString());
			zadania.niezbedne.push_back(ui.lineEdit_8->text().toStdString());
			zadania.telefon.push_back(ui.lineEdit_10->text().toStdString());
			zadania.miejsce.push_back(ui.lineEdit_9->text().toStdString());
			zadania.dodatkowe.push_back(ui.lineEdit_11->text().toStdString());
			zadania.wykonane.push_back(ui.listWidget->currentItem()->text().toStdString());
			zadania.zapis(imie.toStdString(), nazwisko.toStdString());
			QMessageBox::information(this, "Sukces", "Zadanie zostalo dodane poprawnie");
		}
	}
	else {
		if (ui.listWidget->currentRow() < 0)
			;
		else {
			zadania.date[numer_zadania] = ui.dateEdit->date().toString("dd-MM-yyyy").toStdString();
			zadania.hour[numer_zadania] = ui.timeEdit->time().toString("HH.mm").toStdString();
			zadania.imie[numer_zadania] = ui.lineEdit_3->text().toStdString();
			zadania.nazwisko[numer_zadania] = ui.lineEdit_4->text().toStdString();
			zadania.firma[numer_zadania] = ui.lineEdit_5->text().toStdString();
			zadania.stanowisko[numer_zadania] = ui.lineEdit_6->text().toStdString();
			zadania.cel[numer_zadania] = ui.lineEdit_7->text().toStdString();
			zadania.niezbedne[numer_zadania] = ui.lineEdit_8->text().toStdString();
			zadania.telefon[numer_zadania] = ui.lineEdit_10->text().toStdString();
			zadania.miejsce[numer_zadania] = ui.lineEdit_9->text().toStdString();
			zadania.dodatkowe[numer_zadania] = ui.lineEdit_11->text().toStdString();
			zadania.wykonane[numer_zadania] = ui.listWidget->currentItem()->text().toStdString();
			zadania.zapis(imie.toStdString(), nazwisko.toStdString());
			QMessageBox::information(this, "Sukces", "Zadanie zostalo edytowane poprawnie");
		}
	}
}