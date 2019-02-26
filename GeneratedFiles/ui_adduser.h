/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adduser
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditpassword;
    QLineEdit *lineEditpasswordagain;
    QLineEdit *lineEditname;
    QLineEdit *lineEditlastname;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *adduser)
    {
        if (adduser->objectName().isEmpty())
            adduser->setObjectName(QStringLiteral("adduser"));
        adduser->resize(611, 403);
        gridLayoutWidget = new QWidget(adduser);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 40, 491, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditpassword = new QLineEdit(gridLayoutWidget);
        lineEditpassword->setObjectName(QStringLiteral("lineEditpassword"));
        lineEditpassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditpassword, 2, 1, 1, 1);

        lineEditpasswordagain = new QLineEdit(gridLayoutWidget);
        lineEditpasswordagain->setObjectName(QStringLiteral("lineEditpasswordagain"));
        lineEditpasswordagain->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditpasswordagain, 3, 1, 1, 1);

        lineEditname = new QLineEdit(gridLayoutWidget);
        lineEditname->setObjectName(QStringLiteral("lineEditname"));

        gridLayout->addWidget(lineEditname, 0, 1, 1, 1);

        lineEditlastname = new QLineEdit(gridLayoutWidget);
        lineEditlastname->setObjectName(QStringLiteral("lineEditlastname"));

        gridLayout->addWidget(lineEditlastname, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        pushButton = new QPushButton(adduser);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 270, 171, 71));
        QWidget::setTabOrder(lineEditname, lineEditlastname);
        QWidget::setTabOrder(lineEditlastname, lineEditpassword);
        QWidget::setTabOrder(lineEditpassword, lineEditpasswordagain);
        QWidget::setTabOrder(lineEditpasswordagain, pushButton);

        retranslateUi(adduser);

        QMetaObject::connectSlotsByName(adduser);
    } // setupUi

    void retranslateUi(QDialog *adduser)
    {
        adduser->setWindowTitle(QApplication::translate("adduser", "Dodaj u\305\274ytkownika", Q_NULLPTR));
        lineEditname->setText(QString());
        label->setText(QApplication::translate("adduser", "Imi\304\231:", Q_NULLPTR));
        label_2->setText(QApplication::translate("adduser", "Nazwisko:", Q_NULLPTR));
        label_3->setText(QApplication::translate("adduser", "Has\305\202o:", Q_NULLPTR));
        label_4->setText(QApplication::translate("adduser", "Powt\303\263rz has\305\202o:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("adduser", "Dodaj u\305\274ytkownika", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adduser: public Ui_adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
