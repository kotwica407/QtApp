#include "login.h"

login::login(QWidget *parent) : QDialog(parent) {
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(foo()));
}

login::~login()
{

}

void login::foo() {
	xml_users_list users;
	users.odczyt_wezlow();
	bool true_data = false;
	int i = 0;
	for (i = 0; i < users.name.size(); i++)
		if (ui.lineEditname->text() == QString::fromStdString(users.name[i]) && ui.lineEditlastname->text() == QString::fromStdString(users.lastname[i]) && ui.lineEditpassword->text() == QString::fromStdString(users.password[i])) {
			true_data = true;
			break;
		}
	if (true_data == false)
		QMessageBox::information(this, "Error", "Bledne imie, nazwisko lub haslo");
	else {
		kalendarz w(ui.lineEditname->text(), ui.lineEditlastname->text());
		w.exec();
		
	}
}
