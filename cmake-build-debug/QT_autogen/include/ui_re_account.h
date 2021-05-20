/********************************************************************************
** Form generated from reading UI file 're_account.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_ACCOUNT_H
#define UI_RE_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Re_account
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_1;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_save;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Re_account)
    {
        if (Re_account->objectName().isEmpty())
            Re_account->setObjectName(QString::fromUtf8("Re_account"));
        Re_account->resize(300, 600);
        gridLayout = new QGridLayout(Re_account);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Re_account);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget_6 = new QWidget(Re_account);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        comboBox_2 = new QComboBox(widget_6);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_6->addWidget(comboBox_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_6, 5, 0, 1, 1);

        widget = new QWidget(Re_account);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_1 = new QLineEdit(widget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        horizontalLayout->addWidget(lineEdit_1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_7 = new QWidget(Re_account);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btn_save = new QPushButton(widget_7);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));

        horizontalLayout_7->addWidget(btn_save);


        gridLayout->addWidget(widget_7, 6, 0, 1, 1);

        widget_4 = new QWidget(Re_account);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_4 = new QLineEdit(widget_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout->addWidget(widget_4, 4, 0, 1, 1);

        widget_2 = new QWidget(Re_account);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget_5 = new QWidget(Re_account);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        comboBox = new QComboBox(widget_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        gridLayout->addWidget(widget_5, 3, 0, 1, 1);


        retranslateUi(Re_account);

        QMetaObject::connectSlotsByName(Re_account);
    } // setupUi

    void retranslateUi(QWidget *Re_account)
    {
        Re_account->setWindowTitle(QApplication::translate("Re_account", "Form", nullptr));
        label->setText(QApplication::translate("Re_account", "\344\270\252\344\272\272\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        label_7->setText(QApplication::translate("Re_account", "\346\211\200\345\200\237\345\233\276\344\271\246", nullptr));
        label_2->setText(QApplication::translate("Re_account", "\345\255\246\345\217\267", nullptr));
        btn_save->setText(QApplication::translate("Re_account", "\344\277\235\345\255\230", nullptr));
        label_6->setText(QApplication::translate("Re_account", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("Re_account", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Re_account", "\346\200\247\345\210\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Re_account: public Ui_Re_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_ACCOUNT_H
