/********************************************************************************
** Form generated from reading UI file 'newmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMANAGE_H
#define UI_NEWMANAGE_H

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

class Ui_Newmanage
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QComboBox *comboBox;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Newmanage)
    {
        if (Newmanage->objectName().isEmpty())
            Newmanage->setObjectName(QString::fromUtf8("Newmanage"));
        Newmanage->resize(300, 300);
        gridLayout_2 = new QGridLayout(Newmanage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Newmanage);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(Newmanage);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        widget_4 = new QWidget(Newmanage);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_4 = new QLineEdit(widget_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout_2->addWidget(widget_4, 2, 0, 1, 1);

        widget_5 = new QWidget(Newmanage);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        comboBox = new QComboBox(widget_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_5, 3, 0, 1, 1);

        widget_2 = new QWidget(Newmanage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        gridLayout_2->addWidget(widget_2, 4, 0, 1, 1);

        widget_3 = new QWidget(Newmanage);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        gridLayout_2->addWidget(widget_3, 5, 0, 1, 1);

        pushButton = new QPushButton(Newmanage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 6, 0, 1, 1);


        retranslateUi(Newmanage);

        QMetaObject::connectSlotsByName(Newmanage);
    } // setupUi

    void retranslateUi(QWidget *Newmanage)
    {
        Newmanage->setWindowTitle(QApplication::translate("Newmanage", "Form", nullptr));
        label->setText(QApplication::translate("Newmanage", "\347\256\241\347\220\206\345\221\230\346\263\250\345\206\214", nullptr));
        label_2->setText(QApplication::translate("Newmanage", "\350\264\246\345\217\267", nullptr));
        label_5->setText(QApplication::translate("Newmanage", "\345\247\223\345\220\215", nullptr));
        label_6->setText(QApplication::translate("Newmanage", "\346\200\247\345\210\253", nullptr));
        comboBox->setItemText(0, QApplication::translate("Newmanage", "\347\224\267", nullptr));
        comboBox->setItemText(1, QApplication::translate("Newmanage", "\345\245\263", nullptr));

        label_4->setText(QApplication::translate("Newmanage", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("Newmanage", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Newmanage", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newmanage: public Ui_Newmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMANAGE_H
