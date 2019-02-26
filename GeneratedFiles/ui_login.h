/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditname;
    QLineEdit *lineEditlastname;
    QLineEdit *lineEditpassword;
    QPushButton *pushButton;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->setWindowModality(Qt::WindowModal);
        login->resize(877, 566);
        gridLayoutWidget = new QWidget(login);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(159, 59, 471, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditname = new QLineEdit(gridLayoutWidget);
        lineEditname->setObjectName(QStringLiteral("lineEditname"));

        gridLayout->addWidget(lineEditname, 0, 1, 1, 1);

        lineEditlastname = new QLineEdit(gridLayoutWidget);
        lineEditlastname->setObjectName(QStringLiteral("lineEditlastname"));

        gridLayout->addWidget(lineEditlastname, 1, 1, 1, 1);

        lineEditpassword = new QLineEdit(gridLayoutWidget);
        lineEditpassword->setObjectName(QStringLiteral("lineEditpassword"));
        lineEditpassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditpassword, 2, 1, 1, 1);

        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 340, 221, 81));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Logowanie", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "Has\305\202o:", Q_NULLPTR));
        label->setText(QApplication::translate("login", "Imi\304\231:", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "Nazwisko:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "Zaloguj", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
