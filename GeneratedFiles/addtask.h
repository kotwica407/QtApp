#ifndef ADDTASK_H
#define ADDTASK_H

/*!
* \file
* \brief Definicja klasy addtask
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicje klasy addtask, ktora
* umozliwia dodanie i edycje zadania
*/

#include <QDialog>
#include "ui_addtask.h"
#include "xml_tasks_list.h"
#include <QMessageBox>
#include <sstream>

class addtask : public QDialog
{
	Q_OBJECT

public:
	addtask(QString name, QString lastname, QWidget *parent = 0);
	addtask(QString name, QString lastname, int i, QWidget *parent = 0);
	~addtask();
	QString imie; /*!< Imie uzytkownika */
	QString nazwisko; /*!< Nazwisko uzytkownika */
	xml_tasks_list zadania; /*!< Lista zadan uzytkownika */
	bool tryb; /*!< Okresla tryb okna - edycja lub dodanie nowego zadania */
	int numer_zadania; /*!< W przypadku edycji indeks edytowanego zadania */

private:
	Ui::addtask ui;
private slots:
	void foo(); /*!< Zapisuje nowe zadanie lub edytuje wybrane zadanie */
};

#endif // ADDTASK_H
