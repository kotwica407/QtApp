/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addtask
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_11;
    QLabel *label_11;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_10;
    QLabel *label_10;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_12;
    QTimeEdit *timeEdit;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *addtask)
    {
        if (addtask->objectName().isEmpty())
            addtask->setObjectName(QStringLiteral("addtask"));
        addtask->resize(578, 620);
        addtask->setModal(true);
        gridLayoutWidget = new QWidget(addtask);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 50, 431, 410));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        lineEdit_7 = new QLineEdit(gridLayoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 6, 1, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 5, 1, 1, 1);

        lineEdit_9 = new QLineEdit(gridLayoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 8, 1, 1, 1);

        lineEdit_11 = new QLineEdit(gridLayoutWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        gridLayout->addWidget(lineEdit_11, 10, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 10, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_8 = new QLineEdit(gridLayoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 7, 1, 1, 1);

        lineEdit_10 = new QLineEdit(gridLayoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        gridLayout->addWidget(lineEdit_10, 9, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 11, 0, 1, 1);

        timeEdit = new QTimeEdit(gridLayoutWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 11, 1, 1, 1);

        pushButton = new QPushButton(addtask);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 510, 161, 71));
        QWidget::setTabOrder(dateEdit, timeEdit);
        QWidget::setTabOrder(timeEdit, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, listWidget);
        QWidget::setTabOrder(listWidget, pushButton);

        retranslateUi(addtask);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(addtask);
    } // setupUi

    void retranslateUi(QDialog *addtask)
    {
        addtask->setWindowTitle(QApplication::translate("addtask", "addtask", Q_NULLPTR));
        lineEdit_3->setText(QString());
        lineEdit_4->setText(QString());
        lineEdit_7->setText(QString());
        lineEdit_6->setText(QString());
        lineEdit_9->setText(QString());
        lineEdit_11->setText(QString());
        label_11->setText(QApplication::translate("addtask", "Dodatkowe", Q_NULLPTR));
        label_7->setText(QApplication::translate("addtask", "Cel", Q_NULLPTR));
        lineEdit_8->setText(QString());
        lineEdit_10->setText(QString());
        label_10->setText(QApplication::translate("addtask", "Telefon", Q_NULLPTR));
        lineEdit_5->setText(QString());
        label_9->setText(QApplication::translate("addtask", "Miejsce", Q_NULLPTR));
        label_5->setText(QApplication::translate("addtask", "Nazwa firmy", Q_NULLPTR));
        label_8->setText(QApplication::translate("addtask", "Niezb\304\231dne", Q_NULLPTR));
        label_2->setText(QApplication::translate("addtask", "Godzina", Q_NULLPTR));
        label_3->setText(QApplication::translate("addtask", "Imi\304\231", Q_NULLPTR));
        label_4->setText(QApplication::translate("addtask", "Nazwisko", Q_NULLPTR));
        label->setText(QApplication::translate("addtask", "Data", Q_NULLPTR));
        label_6->setText(QApplication::translate("addtask", "Stanowisko", Q_NULLPTR));
        label_12->setText(QApplication::translate("addtask", "Wykonane", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addtask", "Dodaj zadanie", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addtask: public Ui_addtask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
