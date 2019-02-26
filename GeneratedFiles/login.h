#ifndef LOGIN_H
#define LOGIN_H

/*!
* \file
* \brief Definicja klasy login
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicje klasy login, ktora
* pelni funkcjê okna logowania
* u¿ytkownika
*/

#include <QDialog>
#include "ui_login.h"
#include "xml_users_list.h"
#include "xml_tasks_list.h"
#include "kalendarz.h"
#include <QMessageBox>

using namespace std;
class login : public QDialog
{
	Q_OBJECT
private:
	Ui::login ui;
	static login single;
private slots:
	void foo(); /*!< Przycisk logowania uzytkownika */

public:
	login(QWidget *parent = 0);
	~login();

	/**
	* funkcja niezbedna we wzorcu projektowym
	* Singleton, uniemozliwia utworzenie
	* wiecej niz jednego obiektu tej klasy
	*/
	static login &getInstance() {
		static login single;
		return single;
	}


};

#endif // LOGIN_H
