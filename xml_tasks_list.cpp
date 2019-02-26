#include "xml_tasks_list.h"

xml_tasks_list::xml_tasks_list(){
}

xml_tasks_list::~xml_tasks_list(){
}

void xml_tasks_list::odczyt_atrybutow(xml_node <>* node) {
	;
}

void xml_tasks_list::odczyt_atrybutow(string name, string lastname) {
	string ggg = name+"_"+lastname+"_tasks.xml";
	ifstream file(ggg);
	vector<char> buffer((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	document.parse<0>(&buffer[0]);
	file.close();
	xml_node <>* body = document.first_node();
	for (xml_node <>* zadanie = body->first_node(); zadanie; zadanie = zadanie->next_sibling()) {
			xml_attribute <>* a = zadanie->first_attribute();
			stringstream ss0, ss10, ss1, ss2, ss3, ss4, ss5, ss6, ss7, ss8, ss9, ss11;
			ss0 << a->value();
			string s = ss0.str();
			a = a->next_attribute();
			ss10 << a->value();
			string s1 = ss10.str();
			date.push_back(s);
			hour.push_back(s1);
			a = a->next_attribute();
			ss1 << a->value();
			imie.push_back(ss1.str());
			a = a->next_attribute();
			ss2 << a->value();
			nazwisko.push_back(ss2.str());
			a = a->next_attribute();
			ss3 << a->value();
			firma.push_back(ss3.str());
			a = a->next_attribute();
			ss4 << a->value();
			stanowisko.push_back(ss4.str());
			a = a->next_attribute();
			ss5 << a->value();
			cel.push_back(ss5.str());
			a = a->next_attribute();
			ss6 << a->value();
			niezbedne.push_back(ss6.str());
			a = a->next_attribute();
			ss7 << a->value();
			miejsce.push_back(ss7.str());
			a = a->next_attribute();
			ss8 << a->value();
			telefon.push_back(ss8.str());
			a = a->next_attribute();
			ss9 << a->value();
			dodatkowe.push_back(ss9.str());
			a = a->next_attribute();
			ss11 << a->value();
			wykonane.push_back(ss11.str());
		}
}

void xml_tasks_list::create_tasks_list(string name, string lastname) {
	xml_node <>* body = document.allocate_node(node_element, "body");
	xml_node <>* zadanie = document.allocate_node(node_element, "zadanie");
	zadanie->append_attribute(document.allocate_attribute("data", "01-01-1970"));
	zadanie->append_attribute(document.allocate_attribute("godzina", "10.00"));
	zadanie->append_attribute(document.allocate_attribute("name", "Gal"));
	zadanie->append_attribute(document.allocate_attribute("lastname", "Anonim"));
	zadanie->append_attribute(document.allocate_attribute("firma", "JanuszCompany"));
	zadanie->append_attribute(document.allocate_attribute("stanowisko", "prezes"));
	zadanie->append_attribute(document.allocate_attribute("cel", "kasa"));
	zadanie->append_attribute(document.allocate_attribute("niezbedne", "dlugopis"));
	zadanie->append_attribute(document.allocate_attribute("miejsce", "Krakowskie Przedmiescie 12"));
	zadanie->append_attribute(document.allocate_attribute("telefon", "123456789"));
	zadanie->append_attribute(document.allocate_attribute("dodatkowe", "brak"));
	zadanie->append_attribute(document.allocate_attribute("wykonane", "tak"));
	body->append_node(zadanie);
	document.append_node(body);
	fstream file;
	file.open(name + "_" + lastname + "_tasks.xml", ios::out);
	file << document;
	file.close();
}

void xml_tasks_list::zapis(string name, string lastname) {
	xml_document <> doc;
	xml_node <>* body = doc.allocate_node(node_element, "body");
	for (int i = 0; i < firma.size(); i++) {
		xml_node <>* zadanie = doc.allocate_node(node_element, "zadanie");
		zadanie->append_attribute(doc.allocate_attribute("data", date[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("godzina", hour[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("imie", imie[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("nazwisko", nazwisko[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("firma", firma[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("stanowisko", stanowisko[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("cel", cel[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("niezbedne", niezbedne[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("miejsce", miejsce[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("telefon", telefon[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("dodatkowe", dodatkowe[i].c_str()));
		zadanie->append_attribute(doc.allocate_attribute("wykonane", wykonane[i].c_str()));
		body->append_node(zadanie);
	}
	doc.append_node(body);
	
	fstream file;
	file.open(name + "_" + lastname + "_tasks.xml", ios::out);
	file << doc;
	file.close();
}

void xml_tasks_list::zapis(string name, string lastname, int except) {
	xml_document <> doc;
	xml_node <>* body = doc.allocate_node(node_element, "body");
	for (int i = 0; i < firma.size(); i++) {
		if (i != except) {
			xml_node <>* zadanie = doc.allocate_node(node_element, "zadanie");
			zadanie->append_attribute(doc.allocate_attribute("data", date[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("godzina", hour[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("imie", imie[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("nazwisko", nazwisko[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("firma", firma[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("stanowisko", stanowisko[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("cel", cel[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("niezbedne", niezbedne[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("miejsce", miejsce[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("telefon", telefon[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("dodatkowe", dodatkowe[i].c_str()));
			zadanie->append_attribute(doc.allocate_attribute("wykonane", wykonane[i].c_str()));
			body->append_node(zadanie);
		}
	}
	doc.append_node(body);

	fstream file;
	file.open(name + "_" + lastname + "_tasks.xml", ios::out);
	file << doc;
	file.close();
}

void xml_tasks_list::clear() {
	date.clear();
	hour.clear();
	imie.clear();
	nazwisko.clear();
	firma.clear();
	stanowisko.clear();
	cel.clear();
	niezbedne.clear();
	miejsce.clear();
	telefon.clear();
	dodatkowe.clear();
	wykonane.clear();
}