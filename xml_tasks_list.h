#pragma once

/*!
* \file
* \brief Definicja klasy xml_tasks_list
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicje klasy xml_tasks_list, ktora
* przechowuje liste zadan danego uzytkownika
* odczytan¹ z pliku xml, umozliwia
* odczyt pliku xml z lista zadan
* oraz zapis listy zadan do pliku xml
*/

#include "xml.h"
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class xml_tasks_list : public xml {
	public:
		xml_document<> document; /*!< Przechowuje parsowany dokument */
		vector<string> date; /*!< Wektor dat zadan */
		vector<string> hour; /*!< Wektor godzin zadan */
		vector<string> imie; /*!< Wektor imion */
		vector<string> nazwisko; /*!< Wektor nazwisk */
		vector<string> firma; /*!< Wektor nazw firm */
		vector<string> stanowisko; /*!< Wektor nazw stanowisk */
		vector<string> cel; /*!< Wektor celow zadan */
		vector<string> niezbedne; /*!< Wektor rzeczy niezbednych w zadaniu */
		vector<string> miejsce; /*!< Wektor miejsca wykonania zadania */
		vector<string> telefon; /*!< Wektor numerow telefonow */
		vector<string> dodatkowe; /*!< Wektor informacji dodatkowych */
		vector<string> wykonane; /*!< Wektor przechowujacy informacje o wykonaniu zadania */
		xml_tasks_list();
		~xml_tasks_list();
		void odczyt_atrybutow(xml_node <>* node);
		void odczyt_atrybutow(string name, string lastname); /*!< Odczytuje zadania z pliku xml */
		void create_tasks_list(string name, string lastname); /*!< Tworzy plik xml z lista zadan */
		void zapis(string name, string lastname); /*!< Zapisuje liste zadan do pliku xml */
		void zapis(string name, string lastname, int except); /*!< Zapisuje liste zadan do pliku xml z wyjatkiem jednego zadania */
		void clear(); /*!< Czysci liste zadan */
};

