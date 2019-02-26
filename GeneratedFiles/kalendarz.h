#ifndef KALENDARZ_H
#define KALENDARZ_H
/*!
* \file
* \brief Definicja klasy kalendarz
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicje klasy kalendarz, ktora
* pelni funkcjê wyswietlania listy zadan,
* ich dodawania, usuwania, edytowania,
* generowania raportu
*/

#include <QDialog>
#include "ui_kalendarz.h"
#include "xml_tasks_list.h"
#include "addtask.h"
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
class kalendarz : public QDialog {
	Q_OBJECT

public:
	kalendarz(QString name, QString lastname, QWidget *parent = 0);
	~kalendarz();
	QString imie; /*!< Imie uzytkownika */
	QString nazwisko; /*!< Nazwisko uzytkownika */
	xml_tasks_list zadania; /*!< Lista zadan uzytkownika */
	vector<int> zadania_dnia; /*!< Przechowuje indeksy zadan danego dnia */
private:
	Ui::kalendarz ui;
private slots:
	void foo(); /*!< Wyswietlenie listy zadan na dany dzien */
	void foo2(); /*!< Otwiera okno umozliwiajace dodanie nowego zadania */
	void foo3(); /*!< Usuwa wybrane zadanie */
	void foo4(); /*!< Otwiera okno umozliwiajace edycje wybranego zadania */
	void foo5(); /*!< Wyswietla szczegoly wybranego zadania */
	void foo6(); /*!< Odznacza wybrane zadanie jako wykonane */
	void foo7(); /*!< Generuje raport z dnia wybranego w kalendarzu do pliku tekstowego */
};

#endif // KALENDARZ_H
