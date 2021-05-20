/********************************************************************************
** Form generated from reading UI file 'register_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_QT_H
#define UI_REGISTER_QT_H

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

class Ui_register_qt
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_register;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *re_num;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *re_name;
    QLabel *label;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *re_password1;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *re_password2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *re_sex;

    void setupUi(QWidget *register_qt)
    {
        if (register_qt->objectName().isEmpty())
            register_qt->setObjectName(QString::fromUtf8("register_qt"));
        register_qt->resize(300, 600);
        register_qt->setMinimumSize(QSize(300, 600));
        register_qt->setMaximumSize(QSize(300, 600));
        gridLayout = new QGridLayout(register_qt);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 1);

        widget_7 = new QWidget(register_qt);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btn_register = new QPushButton(widget_7);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));
        btn_register->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"color:white;\n"
"background-color:rgb(85,170,127);\n"
"border-radius:3px;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        horizontalLayout_7->addWidget(btn_register);


        gridLayout->addWidget(widget_7, 13, 0, 1, 1);

        widget_5 = new QWidget(register_qt);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(25, 25));
        label_4->setMaximumSize(QSize(25, 25));
        label_4->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/num.png")));
        label_4->setScaledContents(true);

        horizontalLayout_5->addWidget(label_4);

        re_num = new QLineEdit(widget_5);
        re_num->setObjectName(QString::fromUtf8("re_num"));
        re_num->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));

        horizontalLayout_5->addWidget(re_num);


        gridLayout->addWidget(widget_5, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 10, 0, 1, 1);

        widget = new QWidget(register_qt);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(25, 25));
        label_2->setMaximumSize(QSize(25, 25));
        label_2->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/name.png")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        re_name = new QLineEdit(widget);
        re_name->setObjectName(QString::fromUtf8("re_name"));
        re_name->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));

        horizontalLayout->addWidget(re_name);


        gridLayout->addWidget(widget, 6, 0, 1, 1);

        label = new QLabel(register_qt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget_3 = new QWidget(register_qt);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(25, 25));
        label_7->setMaximumSize(QSize(25, 25));
        label_7->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/password.png")));
        label_7->setScaledContents(true);

        horizontalLayout_3->addWidget(label_7);

        re_password1 = new QLineEdit(widget_3);
        re_password1->setObjectName(QString::fromUtf8("re_password1"));
        re_password1->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));
        re_password1->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(re_password1);


        gridLayout->addWidget(widget_3, 9, 0, 1, 1);

        widget_4 = new QWidget(register_qt);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(25, 25));
        label_6->setMaximumSize(QSize(25, 25));
        label_6->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/password.png")));
        label_6->setScaledContents(true);

        horizontalLayout_4->addWidget(label_6);

        re_password2 = new QLineEdit(widget_4);
        re_password2->setObjectName(QString::fromUtf8("re_password2"));
        re_password2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));
        re_password2->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(re_password2);


        gridLayout->addWidget(widget_4, 11, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        widget_6 = new QWidget(register_qt);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(25, 25));
        label_3->setMaximumSize(QSize(25, 25));
        label_3->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/sex.png")));
        label_3->setScaledContents(true);

        horizontalLayout_6->addWidget(label_3);

        re_sex = new QComboBox(widget_6);
        re_sex->addItem(QString());
        re_sex->addItem(QString());
        re_sex->setObjectName(QString::fromUtf8("re_sex"));

        horizontalLayout_6->addWidget(re_sex);


        gridLayout->addWidget(widget_6, 4, 0, 1, 1);


        retranslateUi(register_qt);

        QMetaObject::connectSlotsByName(register_qt);
    } // setupUi

    void retranslateUi(QWidget *register_qt)
    {
        register_qt->setWindowTitle(QApplication::translate("register_qt", "Form", nullptr));
        btn_register->setText(QApplication::translate("register_qt", "\346\263\250  \345\206\214", nullptr));
        label_4->setText(QString());
        re_num->setText(QString());
        re_num->setPlaceholderText(QApplication::translate("register_qt", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\255\246\345\217\267", nullptr));
        label_2->setText(QString());
        re_name->setText(QString());
        re_name->setPlaceholderText(QApplication::translate("register_qt", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\247\223\345\220\215", nullptr));
        label->setText(QApplication::translate("register_qt", "      \346\254\242\350\277\216\346\235\245\345\210\260\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_7->setText(QString());
        re_password1->setText(QString());
        re_password1->setPlaceholderText(QApplication::translate("register_qt", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", nullptr));
        label_6->setText(QString());
        re_password2->setText(QString());
        re_password2->setPlaceholderText(QApplication::translate("register_qt", "\350\257\267\350\276\223\345\205\245\345\206\215\346\254\241\345\257\206\347\240\201", nullptr));
        label_3->setText(QString());
        re_sex->setItemText(0, QApplication::translate("register_qt", "\347\224\267", nullptr));
        re_sex->setItemText(1, QApplication::translate("register_qt", "\345\245\263", nullptr));

        re_sex->setCurrentText(QApplication::translate("register_qt", "\347\224\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_qt: public Ui_register_qt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_QT_H
