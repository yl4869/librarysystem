/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_library
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_login;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *line_password;
    QPushButton *btn_retrieve;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *line_account;
    QPushButton *btn_register;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *library)
    {
        if (library->objectName().isEmpty())
            library->setObjectName(QString::fromUtf8("library"));
        library->resize(600, 300);
        centralwidget = new QWidget(library);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 8, 0, 1, 1);

        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"color:white;\n"
"background-color:rgb(85,170,127);\n"
"border-radius:3px;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        gridLayout->addWidget(btn_login, 7, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(25, 25));
        label_2->setMaximumSize(QSize(25, 25));
        label_2->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;\n"
""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/password.png")));
        label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_2);

        line_password = new QLineEdit(widget_2);
        line_password->setObjectName(QString::fromUtf8("line_password"));
        line_password->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));
        line_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(line_password);

        btn_retrieve = new QPushButton(widget_2);
        btn_retrieve->setObjectName(QString::fromUtf8("btn_retrieve"));
        btn_retrieve->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        horizontalLayout_2->addWidget(btn_retrieve);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addWidget(widget_2, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox = new QComboBox(widget_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"border-radius:3px;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(25, 25));
        label->setMaximumSize(QSize(25, 25));
        label->setStyleSheet(QString::fromUtf8("border:1px groove rgb(172,172,172);\n"
"background-color:transparent;\n"
""));
        label->setFrameShape(QFrame::NoFrame);
        label->setPixmap(QPixmap(QString::fromUtf8(":/account.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        line_account = new QLineEdit(widget);
        line_account->setObjectName(QString::fromUtf8("line_account"));
        line_account->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:outset;"));

        horizontalLayout->addWidget(line_account);

        btn_register = new QPushButton(widget);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));
        btn_register->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        horizontalLayout->addWidget(btn_register);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addWidget(widget, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_4, 1, 0, 1, 1);

        library->setCentralWidget(centralwidget);

        retranslateUi(library);

        QMetaObject::connectSlotsByName(library);
    } // setupUi

    void retranslateUi(QMainWindow *library)
    {
        library->setWindowTitle(QApplication::translate("library", "library", nullptr));
        btn_login->setText(QApplication::translate("library", "\347\231\273        \345\275\225", nullptr));
        label_2->setText(QString());
        line_password->setPlaceholderText(QApplication::translate("library", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\345\257\206\347\240\201", nullptr));
        btn_retrieve->setText(QApplication::translate("library", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("library", "                       \346\254\242\350\277\216\346\235\245\345\210\260\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QString());
        line_account->setPlaceholderText(QApplication::translate("library", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\350\264\246\345\217\267", nullptr));
        btn_register->setText(QApplication::translate("library", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class library: public Ui_library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
