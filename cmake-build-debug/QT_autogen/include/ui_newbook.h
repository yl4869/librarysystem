/********************************************************************************
** Form generated from reading UI file 'newbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWBOOK_H
#define UI_NEWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewBook
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_6;
    QLabel *label;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_1;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QPushButton *btn_addbook;

    void setupUi(QWidget *NewBook)
    {
        if (NewBook->objectName().isEmpty())
            NewBook->setObjectName(QString::fromUtf8("NewBook"));
        NewBook->resize(300, 600);
        gridLayout = new QGridLayout(NewBook);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_7 = new QWidget(NewBook);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(widget_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(23, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        lineEdit_6 = new QLineEdit(widget_7);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_7->addWidget(lineEdit_6);


        gridLayout->addWidget(widget_7, 6, 1, 1, 1);

        label = new QLabel(NewBook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
""));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        widget_4 = new QWidget(NewBook);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(3, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        lineEdit_4 = new QLineEdit(widget_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout->addWidget(widget_4, 4, 1, 1, 1);

        widget = new QWidget(NewBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_1 = new QLineEdit(widget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        horizontalLayout->addWidget(lineEdit_1);


        gridLayout->addWidget(widget, 1, 1, 1, 1);

        widget_3 = new QWidget(NewBook);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addWidget(widget_3, 3, 1, 1, 1);

        widget_2 = new QWidget(NewBook);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addWidget(widget_2, 2, 1, 1, 1);

        widget_5 = new QWidget(NewBook);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_5 = new QLineEdit(widget_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);


        gridLayout->addWidget(widget_5, 5, 1, 1, 1);

        btn_addbook = new QPushButton(NewBook);
        btn_addbook->setObjectName(QString::fromUtf8("btn_addbook"));

        gridLayout->addWidget(btn_addbook, 7, 1, 1, 1);


        retranslateUi(NewBook);

        QMetaObject::connectSlotsByName(NewBook);
    } // setupUi

    void retranslateUi(QWidget *NewBook)
    {
        NewBook->setWindowTitle(QApplication::translate("NewBook", "Form", nullptr));
        label_8->setText(QApplication::translate("NewBook", "\346\225\260\351\207\217", nullptr));
        label->setText(QApplication::translate("NewBook", "         \346\226\260\345\273\272\345\233\276\344\271\246\344\277\241\346\201\257", nullptr));
        label_5->setText(QApplication::translate("NewBook", "\345\207\272\347\211\210\347\244\276 ", nullptr));
        label_2->setText(QApplication::translate("NewBook", "\345\233\276\344\271\246\347\274\226\345\217\267", nullptr));
        label_4->setText(QApplication::translate("NewBook", "\344\275\234\350\200\205", nullptr));
        label_3->setText(QApplication::translate("NewBook", "\345\233\276\344\271\246\345\220\215\347\247\260", nullptr));
        label_6->setText(QApplication::translate("NewBook", "\344\270\223\344\270\232\351\242\206\345\237\237", nullptr));
        btn_addbook->setText(QApplication::translate("NewBook", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewBook: public Ui_NewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWBOOK_H
