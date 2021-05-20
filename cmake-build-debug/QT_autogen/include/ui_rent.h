/********************************************************************************
** Form generated from reading UI file 'rent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENT_H
#define UI_RENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rent
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *Rent)
    {
        if (Rent->objectName().isEmpty())
            Rent->setObjectName(QString::fromUtf8("Rent"));
        Rent->resize(300, 300);
        gridLayout = new QGridLayout(Rent);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Rent);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(Rent);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(Rent);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget_4 = new QWidget(Rent);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);


        gridLayout->addWidget(widget_4, 3, 0, 1, 1);

        widget_3 = new QWidget(Rent);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addWidget(widget_3, 4, 0, 1, 1);

        pushButton = new QPushButton(Rent);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);


        retranslateUi(Rent);

        QMetaObject::connectSlotsByName(Rent);
    } // setupUi

    void retranslateUi(QWidget *Rent)
    {
        Rent->setWindowTitle(QApplication::translate("Rent", "Form", nullptr));
        label->setText(QApplication::translate("Rent", "           \347\247\237\345\200\237\350\257\246\346\203\205", nullptr));
        label_2->setText(QApplication::translate("Rent", "\345\255\230\345\234\250\347\212\266\346\200\201", nullptr));
        label_3->setText(QApplication::translate("Rent", "\345\200\237\344\271\246\350\257\273\350\200\205\345\255\246\345\217\267", nullptr));
        label_4->setText(QApplication::translate("Rent", "\345\247\223\345\220\215", nullptr));
        label_5->setText(QApplication::translate("Rent", "\346\200\247\345\210\253", nullptr));
        pushButton->setText(QApplication::translate("Rent", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rent: public Ui_Rent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENT_H
