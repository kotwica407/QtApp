#include "kalendarz.h"

kalendarz::kalendarz(QString name, QString lastname, QWidget *parent) : QDialog(parent), nazwisko(lastname), imie(name) {
	ui.setupUi(this);
	QObject::connect(ui.calendarWidget, SIGNAL(selectionChanged()), this, SLOT(foo()));
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(foo2()));
	QObject::connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(foo3()));
	QObject::connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(foo4()));
	QObject::connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(foo5()));
	QObject::connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(foo6()));
	QObject::connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(foo7()));
	ui.listWidget->clear();
	zadania.odczyt_atrybutow(name.toStdString(),lastname.toStdString());
}

kalendarz::~kalendarz(){
}

void kalendarz::foo() {//jest OK!!!!!!!!!!
	zadania_dnia.clear();
	QString s;
	QDate DD = ui.calendarWidget->selectedDate();
	s = DD.toString("dd-MM-yyyy");
	string scd = s.toStdString();
	ui.listWidget->clear();
	for(int i=0; i<zadania.firma.size(); i++)
		if (zadania.date[i] == scd) {
			ui.listWidget->addItem(QString::fromStdString(zadania.firma[i]));
			zadania_dnia.push_back(i);
		}
}

void kalendarz::foo2() {
	addtask w(imie, nazwisko);
	w.exec();
	zadania.clear();
	zadania.odczyt_atrybutow(imie.toStdString(), nazwisko.toStdString());
	foo();
}

void kalendarz::foo3() {
	if (zadania_dnia.empty() == false) {
		int k = ui.listWidget->currentRow();
		int p = zadania_dnia[k];
		zadania.zapis(imie.toStdString(), nazwisko.toStdString(), p);
		zadania.clear();
		zadania.odczyt_atrybutow(imie.toStdString(), nazwisko.toStdString());
		foo();
	}
}

void kalendarz::foo4() {
	if (zadania_dnia.empty() == false) {
		if (ui.listWidget->currentRow() >= 0) {
			int k = ui.listWidget->currentRow();
			int p = zadania_dnia[k];
			addtask w(imie, nazwisko, p);
			w.exec();
			zadania.clear();
			zadania.odczyt_atrybutow(imie.toStdString(), nazwisko.toStdString());
			foo();
		}
	}
}

void kalendarz::foo5() {
	if (zadania_dnia.empty() == false) {
		if (ui.listWidget->currentRow() >= 0) {
			int k = ui.listWidget->currentRow();
			int p = zadania_dnia[k];
			ui.lineEdit_1->setText(QString::fromStdString(zadania.hour[p]));
			ui.lineEdit_2->setText(QString::fromStdString(zadania.imie[p]));
			ui.lineEdit_12->setText(QString::fromStdString(zadania.nazwisko[p]));
			ui.lineEdit_13->setText(QString::fromStdString(zadania.firma[p]));
			ui.lineEdit_15->setText(QString::fromStdString(zadania.stanowisko[p]));
			ui.lineEdit_14->setText(QString::fromStdString(zadania.cel[p]));
			ui.lineEdit_18->setText(QString::fromStdString(zadania.niezbedne[p]));
			ui.lineEdit_16->setText(QString::fromStdString(zadania.miejsce[p]));
			ui.lineEdit_19->setText(QString::fromStdString(zadania.telefon[p]));
			ui.lineEdit_17->setText(QString::fromStdString(zadania.dodatkowe[p]));
			ui.lineEdit_21->setText(QString::fromStdString(zadania.wykonane[p]));
		}
	}

}

void kalendarz::foo6() {
	if (zadania_dnia.empty() == false) {
		if (ui.listWidget->currentRow() >= 0) {
			int k = ui.listWidget->currentRow();
			int p = zadania_dnia[k];
			zadania.wykonane[p] = "tak";
			zadania.zapis(imie.toStdString(), nazwisko.toStdString());
			zadania.clear();
			zadania.odczyt_atrybutow(imie.toStdString(), nazwisko.toStdString());
			foo();
		}
	}
}

void kalendarz::foo7() {
	stringstream ss;
	ss << "raport_z_dnia_" << ui.calendarWidget->selectedDate().toString("dd_MM_yyyy").toStdString() << "_" << imie.toStdString() << "_" << nazwisko.toStdString() << ".txt";
	string nazwa_pliku;
	nazwa_pliku = ss.str();
	fstream plik(nazwa_pliku , ios::out);
	plik << "Raport z dnia " + ui.calendarWidget->selectedDate().toString("dd.MM.yyyy").toStdString() << endl;
	plik << "\n" << endl;
	if (zadania_dnia.empty() == false) {
		int k = 0;
		for (int i = 0; i < ui.listWidget->count(); i++) {
			int p = zadania_dnia[i];
			string s;
			if (zadania.wykonane[p] == "tak") {
				s = "wykonane";
				k++;
			}
			else
				s = "niewykonane";
			plik << "\t" << zadania.imie[p] << " " << zadania.nazwisko[p] << "\t" << zadania.firma[p] << "\t" << zadania.hour[p] << "\t" << s << endl;
		}
		plik << "\n" << "Procentowe wykonanie zadan: " << k*100.0 / ui.listWidget->count() << endl;
	}
	else {
		plik << "\n" << "Brak zadan z tego dnia" << endl;
	}
	plik.close();
	QMessageBox::information(this, "Sukces", "Wygenerowano raport dnia");
}