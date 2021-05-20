/********************************************************************************
** Form generated from reading UI file 're_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_ADMIN_H
#define UI_RE_ADMIN_H

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

class Ui_Re_admin
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
    QLineEdit *lineEdit_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *Re_admin)
    {
        if (Re_admin->objectName().isEmpty())
            Re_admin->setObjectName(QString::fromUtf8("Re_admin"));
        Re_admin->resize(300, 300);
        gridLayout = new QGridLayout(Re_admin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Re_admin);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(Re_admin);
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

        widget_2 = new QWidget(Re_admin);
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

        widget_4 = new QWidget(Re_admin);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBox = new QComboBox(widget_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_4->addWidget(comboBox);


        gridLayout->addWidget(widget_4, 3, 0, 1, 1);

        widget_3 = new QWidget(Re_admin);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addWidget(widget_3, 4, 0, 1, 1);

        pushButton = new QPushButton(Re_admin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);


        retranslateUi(Re_admin);

        QMetaObject::connectSlotsByName(Re_admin);
    } // setupUi

    void retranslateUi(QWidget *Re_admin)
    {
        Re_admin->setWindowTitle(QApplication::translate("Re_admin", "Form", nullptr));
        label->setText(QApplication::translate("Re_admin", "\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        label_2->setText(QApplication::translate("Re_admin", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QApplication::translate("Re_admin", "\345\220\215\345\255\227", nullptr));
        label_5->setText(QApplication::translate("Re_admin", "\346\200\247\345\210\253", nullptr));
        comboBox->setItemText(0, QApplication::translate("Re_admin", "\347\224\267", nullptr));
        comboBox->setItemText(1, QApplication::translate("Re_admin", "\345\245\263", nullptr));

        label_4->setText(QApplication::translate("Re_admin", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Re_admin", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Re_admin: public Ui_Re_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_ADMIN_H
