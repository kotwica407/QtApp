#pragma once

/*!
* \file
* \brief Definicja klasy xml_users_list
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicje klasy xml_users_list, ktora
* przechowuje liste uzytkownikow, umozliwia
* dodanie uzytkownika do pliku xml oraz
* sprawdzenie istnienia uzytkownika w pliku xml
*/

#include "xml.h"
#include <string>
#include <vector>
#include <sstream>
using namespace std;
using namespace rapidxml;
class xml_users_list :public xml {
	public:
		xml_document<> document; /*!< Przechowuje parsowany dokument */
		vector<string> id; /*!< Wektor indeksow uzytkownikow */
		vector<string> name; /*!< Wektor imion uzytkownikow */
		vector<string> lastname; /*!< Wektor nazwisk uzytkownikow */
		vector<string> password; /*!< Wektor hasel uzytkownikow */
		xml_users_list();
		~xml_users_list();
		void odczyt_atrybutow(xml_node <>* node); /*!< Odczyt atrybutow danego wezla */
		void odczyt_wezlow(); /*!< Odczyt wezlow pliku xml */
		void zapis(string a, string b, string c); /*!< Zapis uzytkownika do pliku xml */
};

