#ifndef ADAMOWICZ_JANKIEWICZ_PROJEKT_PZO_H
#define ADAMOWICZ_JANKIEWICZ_PROJEKT_PZO_H

/*!
* \file
* \brief Definicja klasy Adamowicz_Jankiewicz_projekt_PZO
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicjê klasy Adamowicz_Jankiewicz_projekt_PZO, która
* pe³ni funkcjê g³ównego okna aplikacji
*/

#include <QtWidgets/QMainWindow>
#include "ui_adamowicz_jankiewicz_projekt_pzo.h"
#include "adduser.h"
#include "login.h"
#include "kalendarz.h"

class Adamowicz_Jankiewicz_projekt_PZO : public QMainWindow
{
	Q_OBJECT
	
public:
	Adamowicz_Jankiewicz_projekt_PZO(QWidget *parent = 0);
	~Adamowicz_Jankiewicz_projekt_PZO();

private:
	Ui::Adamowicz_Jankiewicz_projekt_PZOClass ui;
	private slots:
		void foo(); /*!< Przejœcie do okna tworzenia u¿ytkownika */
		void foo2(); /*!< Przejœcie do okna logowania */
};

#endif // ADAMOWICZ_JANKIEWICZ_PROJEKT_PZO_H
