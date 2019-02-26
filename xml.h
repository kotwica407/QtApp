#pragma once

/*!
* \file
* \brief Definicja klasy abstrakcyjnej xml
*
* \author Mateusz Adamowicz
* \author Dawid Jankiewicz
*
* Plik zawiera definicje klasy xml, ktora
* jest interfejsem klas xml_tasks_list
* i xml_users_list
*/

#include "xml_headers\rapidxml.hpp"
#include "xml_headers\rapidxml_print.hpp"
#include "xml_headers\rapidxml_utils.hpp"
using namespace rapidxml;
class xml {
public:
	virtual void odczyt_atrybutow(xml_node <>* node) = 0;
	virtual ~xml();
};