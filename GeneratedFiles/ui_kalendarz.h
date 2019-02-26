/********************************************************************************
** Form generated from reading UI file 'kalendarz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KALENDARZ_H
#define UI_KALENDARZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kalendarz
{
public:
    QFrame *frame;
    QCalendarWidget *calendarWidget;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_21;
    QLabel *label_16;
    QLabel *label_19;
    QLabel *label_14;
    QLineEdit *lineEdit_14;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_13;
    QLabel *label_18;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_13;
    QLabel *label_21;
    QLabel *label_20;
    QLabel *label_24;
    QLineEdit *lineEdit_1;
    QLabel *label_23;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *kalendarz)
    {
        if (kalendarz->objectName().isEmpty())
            kalendarz->setObjectName(QStringLiteral("kalendarz"));
        kalendarz->setWindowModality(Qt::NonModal);
        kalendarz->resize(1110, 670);
        kalendarz->setModal(true);
        frame = new QFrame(kalendarz);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 10, 591, 511));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        calendarWidget = new QCalendarWidget(frame);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 10, 571, 491));
        calendarWidget->setGridVisible(true);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
        calendarWidget->setNavigationBarVisible(true);
        listWidget = new QListWidget(kalendarz);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(630, 10, 391, 151));
        pushButton = new QPushButton(kalendarz);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 590, 151, 61));
        pushButton_2 = new QPushButton(kalendarz);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(920, 590, 151, 61));
        pushButton_3 = new QPushButton(kalendarz);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(760, 590, 151, 61));
        gridLayoutWidget = new QWidget(kalendarz);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(630, 160, 331, 410));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_21 = new QLineEdit(gridLayoutWidget);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));

        gridLayout_2->addWidget(lineEdit_21, 10, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 7, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 0, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 5, 0, 1, 1);

        lineEdit_14 = new QLineEdit(gridLayoutWidget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        gridLayout_2->addWidget(lineEdit_14, 5, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 8, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 3, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 9, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_2->addWidget(label_18, 6, 0, 1, 1);

        lineEdit_12 = new QLineEdit(gridLayoutWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        gridLayout_2->addWidget(lineEdit_12, 2, 1, 1, 1);

        lineEdit_15 = new QLineEdit(gridLayoutWidget);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));

        gridLayout_2->addWidget(lineEdit_15, 4, 1, 1, 1);

        lineEdit_19 = new QLineEdit(gridLayoutWidget);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));

        gridLayout_2->addWidget(lineEdit_19, 8, 1, 1, 1);

        lineEdit_16 = new QLineEdit(gridLayoutWidget);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));

        gridLayout_2->addWidget(lineEdit_16, 7, 1, 1, 1);

        lineEdit_17 = new QLineEdit(gridLayoutWidget);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));

        gridLayout_2->addWidget(lineEdit_17, 9, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_18 = new QLineEdit(gridLayoutWidget);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));

        gridLayout_2->addWidget(lineEdit_18, 6, 1, 1, 1);

        lineEdit_13 = new QLineEdit(gridLayoutWidget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        gridLayout_2->addWidget(lineEdit_13, 3, 1, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_2->addWidget(label_21, 2, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 1, 0, 1, 1);

        label_24 = new QLabel(gridLayoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_2->addWidget(label_24, 10, 0, 1, 1);

        lineEdit_1 = new QLineEdit(gridLayoutWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));

        gridLayout_2->addWidget(lineEdit_1, 0, 1, 1, 1);

        label_23 = new QLabel(gridLayoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_2->addWidget(label_23, 4, 0, 1, 1);

        pushButton_4 = new QPushButton(kalendarz);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(960, 160, 151, 61));
        pushButton_5 = new QPushButton(kalendarz);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(960, 250, 151, 61));
        pushButton_6 = new QPushButton(kalendarz);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 550, 151, 61));
        QWidget::setTabOrder(listWidget, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, calendarWidget);
        QWidget::setTabOrder(calendarWidget, lineEdit_21);
        QWidget::setTabOrder(lineEdit_21, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, lineEdit_15);
        QWidget::setTabOrder(lineEdit_15, lineEdit_19);
        QWidget::setTabOrder(lineEdit_19, lineEdit_16);
        QWidget::setTabOrder(lineEdit_16, lineEdit_17);
        QWidget::setTabOrder(lineEdit_17, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_18);
        QWidget::setTabOrder(lineEdit_18, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_1);

        retranslateUi(kalendarz);

        QMetaObject::connectSlotsByName(kalendarz);
    } // setupUi

    void retranslateUi(QDialog *kalendarz)
    {
        kalendarz->setWindowTitle(QApplication::translate("kalendarz", "kalendarz", Q_NULLPTR));
        pushButton->setText(QApplication::translate("kalendarz", "Dodaj zadanie", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("kalendarz", "Usu\305\204 zadanie", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("kalendarz", "Edytuj zadanie", Q_NULLPTR));
        lineEdit_21->setText(QString());
        label_16->setText(QApplication::translate("kalendarz", "Miejsce", Q_NULLPTR));
        label_19->setText(QApplication::translate("kalendarz", "Godzina", Q_NULLPTR));
        label_14->setText(QApplication::translate("kalendarz", "Cel", Q_NULLPTR));
        lineEdit_14->setText(QString());
        label_15->setText(QApplication::translate("kalendarz", "Telefon", Q_NULLPTR));
        label_17->setText(QApplication::translate("kalendarz", "Nazwa firmy", Q_NULLPTR));
        label_13->setText(QApplication::translate("kalendarz", "Dodatkowe", Q_NULLPTR));
        label_18->setText(QApplication::translate("kalendarz", "Niezb\304\231dne", Q_NULLPTR));
        lineEdit_12->setText(QString());
        lineEdit_15->setText(QString());
        lineEdit_19->setText(QString());
        lineEdit_16->setText(QString());
        lineEdit_17->setText(QString());
        lineEdit_2->setText(QString());
        lineEdit_18->setText(QString());
        lineEdit_13->setText(QString());
        label_21->setText(QApplication::translate("kalendarz", "Nazwisko", Q_NULLPTR));
        label_20->setText(QApplication::translate("kalendarz", "Imi\304\231", Q_NULLPTR));
        label_24->setText(QApplication::translate("kalendarz", "Wykonane", Q_NULLPTR));
        lineEdit_1->setText(QString());
        label_23->setText(QApplication::translate("kalendarz", "Stanowisko", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("kalendarz", "Szczeg\303\263\305\202y zadania", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("kalendarz", "Oznacz jako wykonane", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("kalendarz", "Raport dnia", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kalendarz: public Ui_kalendarz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KALENDARZ_H
