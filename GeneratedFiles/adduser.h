#ifndef ADDUSER_HPP
#define ADDUSER_HPP

/*!
* \file
* \brief Definicja klasy adduser
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicje klasy adduser, ktora
* pelni funkcję okna tworzenia nowego
* użytkownika
*/

#include <QDialog>
#include "ui_adduser.h"
#include "xml_users_list.h"
#include "xml_tasks_list.h"
#include <QMessageBox>
using namespace std;
class adduser : public QDialog {
	Q_OBJECT
private:
	Ui::adduser ui;
	static adduser single;
private slots:
	void foo(); /*!< Przycisk tworzenia nowego uzytkownika */

public:
	adduser(QWidget * parent = 0);
	~adduser();

	/**
	* funkcja niezbedna we wzorcu projektowym
	* Singleton, uniemozliwia utworzenie
	* wiecej niz jednego obiektu tej klasy
	*/
	static adduser &getInstance() {
		static adduser single;
		return single;
	}


};

#endif // ADDUSER_HPP