/********************************************************************************
** Form generated from reading UI file 'adamowicz_jankiewicz_projekt_pzo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAMOWICZ_JANKIEWICZ_PROJEKT_PZO_H
#define UI_ADAMOWICZ_JANKIEWICZ_PROJEKT_PZO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adamowicz_Jankiewicz_projekt_PZOClass
{
public:
    QAction *actionZamknij;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Adamowicz_Jankiewicz_projekt_PZOClass)
    {
        if (Adamowicz_Jankiewicz_projekt_PZOClass->objectName().isEmpty())
            Adamowicz_Jankiewicz_projekt_PZOClass->setObjectName(QStringLiteral("Adamowicz_Jankiewicz_projekt_PZOClass"));
        Adamowicz_Jankiewicz_projekt_PZOClass->resize(303, 406);
        actionZamknij = new QAction(Adamowicz_Jankiewicz_projekt_PZOClass);
        actionZamknij->setObjectName(QStringLiteral("actionZamknij"));
        centralWidget = new QWidget(Adamowicz_Jankiewicz_projekt_PZOClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 10, 271, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        Adamowicz_Jankiewicz_projekt_PZOClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Adamowicz_Jankiewicz_projekt_PZOClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Adamowicz_Jankiewicz_projekt_PZOClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Adamowicz_Jankiewicz_projekt_PZOClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Adamowicz_Jankiewicz_projekt_PZOClass->setStatusBar(statusBar);

        retranslateUi(Adamowicz_Jankiewicz_projekt_PZOClass);
        QObject::connect(actionZamknij, SIGNAL(triggered()), Adamowicz_Jankiewicz_projekt_PZOClass, SLOT(close()));

        QMetaObject::connectSlotsByName(Adamowicz_Jankiewicz_projekt_PZOClass);
    } // setupUi

    void retranslateUi(QMainWindow *Adamowicz_Jankiewicz_projekt_PZOClass)
    {
        Adamowicz_Jankiewicz_projekt_PZOClass->setWindowTitle(QApplication::translate("Adamowicz_Jankiewicz_projekt_PZOClass", "Adamowicz_Jankiewicz_projekt_PZO", Q_NULLPTR));
        actionZamknij->setText(QApplication::translate("Adamowicz_Jankiewicz_projekt_PZOClass", "Zamknij", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Adamowicz_Jankiewicz_projekt_PZOClass", "Zaloguj", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Adamowicz_Jankiewicz_projekt_PZOClass", "Stw\303\263rz u\305\274ytkownika", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Adamowicz_Jankiewicz_projekt_PZOClass: public Ui_Adamowicz_Jankiewicz_projekt_PZOClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAMOWICZ_JANKIEWICZ_PROJEKT_PZO_H
