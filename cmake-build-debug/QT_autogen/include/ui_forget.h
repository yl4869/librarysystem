/********************************************************************************
** Form generated from reading UI file 'forget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_H
#define UI_FORGET_H

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

class Ui_forget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btn_register_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QLineEdit *re_password2_2;
    QSpacerItem *verticalSpacer_7;
    QLabel *label;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_15;
    QComboBox *re_sex_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *re_num_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLineEdit *re_password1_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QLineEdit *re_name_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *forget)
    {
        if (forget->objectName().isEmpty())
            forget->setObjectName(QString::fromUtf8("forget"));
        forget->resize(300, 600);
        forget->setMinimumSize(QSize(300, 600));
        forget->setMaximumSize(QSize(300, 600));
        gridLayout = new QGridLayout(forget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_7 = new QWidget(forget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_14 = new QHBoxLayout(widget_7);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        btn_register_2 = new QPushButton(widget_7);
        btn_register_2->setObjectName(QString::fromUtf8("btn_register_2"));
        btn_register_2->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"color:white;\n"
"background-color:rgb(85,170,127);\n"
"border-radius:3px;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        horizontalLayout_14->addWidget(btn_register_2);


        gridLayout->addWidget(widget_7, 13, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 0, 1, 1);

        widget_4 = new QWidget(forget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_15 = new QHBoxLayout(widget_4);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_14 = new QLabel(widget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(25, 25));
        label_14->setMaximumSize(QSize(25, 25));
        label_14->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/password.png")));
        label_14->setScaledContents(true);

        horizontalLayout_15->addWidget(label_14);

        re_password2_2 = new QLineEdit(widget_4);
        re_password2_2->setObjectName(QString::fromUtf8("re_password2_2"));
        re_password2_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));
        re_password2_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_15->addWidget(re_password2_2);


        gridLayout->addWidget(widget_4, 11, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 3, 0, 1, 1);

        label = new QLabel(forget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        widget_6 = new QWidget(forget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_16 = new QHBoxLayout(widget_6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_15 = new QLabel(widget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(25, 25));
        label_15->setMaximumSize(QSize(25, 25));
        label_15->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/sex.png")));
        label_15->setScaledContents(true);

        horizontalLayout_16->addWidget(label_15);

        re_sex_3 = new QComboBox(widget_6);
        re_sex_3->addItem(QString());
        re_sex_3->addItem(QString());
        re_sex_3->setObjectName(QString::fromUtf8("re_sex_3"));

        horizontalLayout_16->addWidget(re_sex_3);


        gridLayout->addWidget(widget_6, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 8, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 10, 0, 1, 1);

        widget_5 = new QWidget(forget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_13 = new QHBoxLayout(widget_5);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(widget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(25, 25));
        label_13->setMaximumSize(QSize(25, 25));
        label_13->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/num.png")));
        label_13->setScaledContents(true);

        horizontalLayout_13->addWidget(label_13);

        re_num_3 = new QLineEdit(widget_5);
        re_num_3->setObjectName(QString::fromUtf8("re_num_3"));
        re_num_3->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));

        horizontalLayout_13->addWidget(re_num_3);


        gridLayout->addWidget(widget_5, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        widget_3 = new QWidget(forget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_12 = new QHBoxLayout(widget_3);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(25, 25));
        label_8->setMaximumSize(QSize(25, 25));
        label_8->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/password.png")));
        label_8->setScaledContents(true);

        horizontalLayout_12->addWidget(label_8);

        re_password1_2 = new QLineEdit(widget_3);
        re_password1_2->setObjectName(QString::fromUtf8("re_password1_2"));
        re_password1_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));
        re_password1_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_12->addWidget(re_password1_2);


        gridLayout->addWidget(widget_3, 9, 0, 1, 3);

        widget = new QWidget(forget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_18 = new QHBoxLayout(widget);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(25, 25));
        label_17->setMaximumSize(QSize(25, 25));
        label_17->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;"));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/name.png")));
        label_17->setScaledContents(true);

        horizontalLayout_18->addWidget(label_17);

        re_name_3 = new QLineEdit(widget);
        re_name_3->setObjectName(QString::fromUtf8("re_name_3"));
        re_name_3->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));

        horizontalLayout_18->addWidget(re_name_3);


        gridLayout->addWidget(widget, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);


        retranslateUi(forget);

        QMetaObject::connectSlotsByName(forget);
    } // setupUi

    void retranslateUi(QWidget *forget)
    {
        forget->setWindowTitle(QApplication::translate("forget", "Form", nullptr));
        btn_register_2->setText(QApplication::translate("forget", "\345\256\214  \346\210\220", nullptr));
        label_14->setText(QString());
        re_password2_2->setText(QString());
        re_password2_2->setPlaceholderText(QApplication::translate("forget", "\350\257\267\350\276\223\345\205\245\345\206\215\346\254\241\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("forget", "      \346\254\242\350\277\216\346\235\245\345\210\260\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_15->setText(QString());
        re_sex_3->setItemText(0, QApplication::translate("forget", "\347\224\267", nullptr));
        re_sex_3->setItemText(1, QApplication::translate("forget", "\345\245\263", nullptr));

        re_sex_3->setCurrentText(QApplication::translate("forget", "\347\224\267", nullptr));
        label_13->setText(QString());
        re_num_3->setText(QString());
        re_num_3->setPlaceholderText(QApplication::translate("forget", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\255\246\345\217\267", nullptr));
        label_8->setText(QString());
        re_password1_2->setText(QString());
        re_password1_2->setPlaceholderText(QApplication::translate("forget", "\350\257\267\350\276\223\345\205\245\346\226\260\347\232\204\345\257\206\347\240\201", nullptr));
        label_17->setText(QString());
        re_name_3->setText(QString());
        re_name_3->setPlaceholderText(QApplication::translate("forget", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forget: public Ui_forget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_H
