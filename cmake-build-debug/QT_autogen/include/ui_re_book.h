/********************************************************************************
** Form generated from reading UI file 're_book.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_BOOK_H
#define UI_RE_BOOK_H

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

class Ui_Re_book
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_6;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLineEdit *lineEdit_1;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_re;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_rent;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *Re_book)
    {
        if (Re_book->objectName().isEmpty())
            Re_book->setObjectName(QString::fromUtf8("Re_book"));
        Re_book->resize(300, 600);
        gridLayout = new QGridLayout(Re_book);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(Re_book);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(23, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        lineEdit_6 = new QLineEdit(widget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_2->addWidget(lineEdit_6);


        gridLayout->addWidget(widget_2, 6, 0, 1, 1);

        widget_5 = new QWidget(Re_book);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(11, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        lineEdit_4 = new QLineEdit(widget_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_5->addWidget(lineEdit_4);


        gridLayout->addWidget(widget_5, 4, 0, 1, 1);

        widget_4 = new QWidget(Re_book);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_5 = new QLineEdit(widget_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_4->addWidget(lineEdit_5);


        gridLayout->addWidget(widget_4, 5, 0, 1, 1);

        label = new QLabel(Re_book);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget_9 = new QWidget(Re_book);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_2 = new QLabel(widget_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_9->addWidget(label_2);

        lineEdit_1 = new QLineEdit(widget_9);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        horizontalLayout_9->addWidget(lineEdit_1);


        gridLayout->addWidget(widget_9, 1, 0, 1, 1);

        widget_8 = new QWidget(Re_book);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(widget_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_8);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_8->addWidget(lineEdit_2);


        gridLayout->addWidget(widget_8, 2, 0, 1, 1);

        widget = new QWidget(Re_book);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_re = new QPushButton(widget);
        btn_re->setObjectName(QString::fromUtf8("btn_re"));
        btn_re->setStyleSheet(QString::fromUtf8("font:75 10pt\"\351\273\221\344\275\223\";\n"
"color:white;\n"
"background-color:rgb(85,170,127);\n"
"border-radius:3px;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        horizontalLayout->addWidget(btn_re);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_rent = new QPushButton(widget);
        btn_rent->setObjectName(QString::fromUtf8("btn_rent"));

        horizontalLayout->addWidget(btn_rent);


        gridLayout->addWidget(widget, 7, 0, 1, 1);

        widget_6 = new QWidget(Re_book);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(23, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        lineEdit_3 = new QLineEdit(widget_6);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_6->addWidget(lineEdit_3);


        gridLayout->addWidget(widget_6, 3, 0, 1, 1);


        retranslateUi(Re_book);

        QMetaObject::connectSlotsByName(Re_book);
    } // setupUi

    void retranslateUi(QWidget *Re_book)
    {
        Re_book->setWindowTitle(QApplication::translate("Re_book", "Form", nullptr));
        label_8->setText(QApplication::translate("Re_book", "\346\225\260\351\207\217", nullptr));
        label_5->setText(QApplication::translate("Re_book", "\345\207\272\347\211\210\347\244\276", nullptr));
        label_6->setText(QApplication::translate("Re_book", "\344\270\223\344\270\232\351\242\206\345\237\237", nullptr));
        label->setText(QApplication::translate("Re_book", "         \344\277\256\346\224\271\345\233\276\344\271\246\344\277\241\346\201\257", nullptr));
        label_2->setText(QApplication::translate("Re_book", "\345\233\276\344\271\246\347\274\226\345\217\267", nullptr));
        label_3->setText(QApplication::translate("Re_book", "\345\233\276\344\271\246\345\220\215\347\247\260", nullptr));
        btn_re->setText(QApplication::translate("Re_book", "\344\277\256\346\224\271\345\256\214\346\210\220", nullptr));
        btn_rent->setText(QApplication::translate("Re_book", "\347\247\237\345\200\237\350\257\246\346\203\205", nullptr));
        label_4->setText(QApplication::translate("Re_book", "\344\275\234\350\200\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Re_book: public Ui_Re_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_BOOK_H
