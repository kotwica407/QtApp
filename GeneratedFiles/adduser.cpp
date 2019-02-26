#include "adduser.h"

adduser::adduser(QWidget * parent) : QDialog(parent) {
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(foo()));
}

adduser::~adduser() {
	
}

void adduser::foo() {
	if (ui.lineEditname->text() == "" || ui.lineEditlastname->text() == "" || ui.lineEditpassword->text() == "" || ui.lineEditpasswordagain->text() == "")
		QMessageBox::information(this, "Error", "Nie wprowadziles jednej z wymaganych wartosci");
	else if (ui.lineEditpassword->text() != ui.lineEditpasswordagain->text())
		QMessageBox::information(this, "Error", "Hasla nie sa takie same");
	else {
		xml_users_list users;
		users.odczyt_wezlow();
		bool different_user = true;
		for (int i = 0; i < users.name.size(); i++)
			if (ui.lineEditname->text() == QString::fromStdString(users.name[i]) && ui.lineEditlastname->text() == QString::fromStdString(users.lastname[i]))
				different_user = false;
		if (different_user == false)
			QMessageBox::information(this, "Error", "Istnieje juz taki uzytkownik");
		else {
			users.zapis(ui.lineEditname->text().toStdString(), ui.lineEditlastname->text().toStdString(), ui.lineEditpassword->text().toStdString());
			QMessageBox::information(this, "Sukces", "Uzytkownik zostal dodany poprawnie");
			xml_tasks_list w;
			w.create_tasks_list(ui.lineEditname->text().toStdString(), ui.lineEditlastname->text().toStdString());
		}
	}
	
}