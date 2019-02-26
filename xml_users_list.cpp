#include "xml_users_list.h"

xml_users_list::xml_users_list(){
	
}

xml_users_list::~xml_users_list(){
}

void xml_users_list::odczyt_atrybutow(xml_node <>* node) {
		xml_attribute <>* a = node->first_attribute();
		stringstream ss1,ss2,ss3,ss4;
		ss1 << a->value();
		id.push_back(ss1.str());
		a = a->next_attribute();
		ss2 << a->value();
		name.push_back(ss2.str());
		a = a->next_attribute();
		ss3 << a->value();
		lastname.push_back(ss3.str());
		a = a->next_attribute();
		ss4 << a->value();
		password.push_back(ss4.str());
		a = a->next_attribute();
}

void xml_users_list::odczyt_wezlow() {
	ifstream file("uzytkownicy.xml");
	vector<char> buffer((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	document.parse<0>(&buffer[0]);
	file.close();
	xml_node <>* nodeCeo = document.first_node();
	for (xml_node <>* uzytkownik = nodeCeo->first_node(); uzytkownik; uzytkownik = uzytkownik->next_sibling()) 
		odczyt_atrybutow(uzytkownik);
}

void xml_users_list::zapis(string a, string b, string c) {
	xml_document <> doc;
	xml_node <>* body = doc.allocate_node(node_element, "body");
	for (int i = 0; i < name.size(); i++) {
		xml_node <>* uzytkownik = doc.allocate_node(node_element, "uzytkownik");
		uzytkownik->append_attribute(doc.allocate_attribute("id", id[i].c_str()));
		uzytkownik->append_attribute(doc.allocate_attribute("name", name[i].c_str()));
		uzytkownik->append_attribute(doc.allocate_attribute("lastname", lastname[i].c_str()));
		uzytkownik->append_attribute(doc.allocate_attribute("password", password[i].c_str()));
		body->append_node(uzytkownik);
	}
	doc.append_node(body);
	string s = std::to_string(name.size() + 1);
	char const *ch = s.c_str();
	xml_node <>* uzytkownik = doc.allocate_node(node_element, "uzytkownik");
	uzytkownik->append_attribute(doc.allocate_attribute("id", ch));
	uzytkownik->append_attribute(doc.allocate_attribute("name", a.c_str()));
	uzytkownik->append_attribute(doc.allocate_attribute("lastname", b.c_str()));
	uzytkownik->append_attribute(doc.allocate_attribute("password", c.c_str()));
	doc.first_node()->append_node(uzytkownik);
	fstream file2;
	file2.open("uzytkownicy.xml", ios::out);
	file2 << doc;
	file2.close();
}