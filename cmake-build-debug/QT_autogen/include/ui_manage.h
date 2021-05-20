/********************************************************************************
** Form generated from reading UI file 'manage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_H
#define UI_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manage
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QPushButton *btn_all_2;
    QTableView *tableView_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_add;
    QPushButton *btn_re_book;
    QPushButton *btn_deletebook;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *btn_search_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *btn_add_2;
    QPushButton *btn_re_account;
    QPushButton *btn_deleteaccount;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QPushButton *btn_search_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_all_3;
    QTableView *tableView_4;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTableView *tableView_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_addman;
    QPushButton *btn_reman;
    QPushButton *btn_deleteman;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *btn_search;
    QPushButton *btn_all;
    QPushButton *btn_exit;

    void setupUi(QWidget *Manage)
    {
        if (Manage->objectName().isEmpty())
            Manage->setObjectName(QString::fromUtf8("Manage"));
        Manage->resize(1000, 450);
        gridLayout = new QGridLayout(Manage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(Manage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btn_all_2 = new QPushButton(tab_3);
        btn_all_2->setObjectName(QString::fromUtf8("btn_all_2"));

        gridLayout_4->addWidget(btn_all_2, 6, 0, 1, 1);

        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));

        gridLayout_4->addWidget(tableView_3, 1, 0, 1, 1);

        widget_7 = new QWidget(tab_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_add = new QPushButton(widget_7);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        horizontalLayout_5->addWidget(btn_add);

        btn_re_book = new QPushButton(widget_7);
        btn_re_book->setObjectName(QString::fromUtf8("btn_re_book"));

        horizontalLayout_5->addWidget(btn_re_book);

        btn_deletebook = new QPushButton(widget_7);
        btn_deletebook->setObjectName(QString::fromUtf8("btn_deletebook"));

        horizontalLayout_5->addWidget(btn_deletebook);


        gridLayout_4->addWidget(widget_7, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_2 = new QComboBox(tab_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        btn_search_2 = new QPushButton(tab_3);
        btn_search_2->setObjectName(QString::fromUtf8("btn_search_2"));

        horizontalLayout_4->addWidget(btn_search_2);


        gridLayout_4->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        btn_add_2 = new QPushButton(tab_4);
        btn_add_2->setObjectName(QString::fromUtf8("btn_add_2"));

        horizontalLayout_12->addWidget(btn_add_2);

        btn_re_account = new QPushButton(tab_4);
        btn_re_account->setObjectName(QString::fromUtf8("btn_re_account"));

        horizontalLayout_12->addWidget(btn_re_account);

        btn_deleteaccount = new QPushButton(tab_4);
        btn_deleteaccount->setObjectName(QString::fromUtf8("btn_deleteaccount"));

        horizontalLayout_12->addWidget(btn_deleteaccount);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_11->addWidget(label_7);

        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_11->addWidget(lineEdit_4);

        btn_search_3 = new QPushButton(tab_4);
        btn_search_3->setObjectName(QString::fromUtf8("btn_search_3"));

        horizontalLayout_11->addWidget(btn_search_3);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btn_all_3 = new QPushButton(tab_4);
        btn_all_3->setObjectName(QString::fromUtf8("btn_all_3"));

        verticalLayout_2->addWidget(btn_all_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        gridLayout_3->addLayout(verticalLayout_4, 1, 0, 1, 1);

        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));

        gridLayout_3->addWidget(tableView_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView_5 = new QTableView(tab);
        tableView_5->setObjectName(QString::fromUtf8("tableView_5"));

        gridLayout_2->addWidget(tableView_5, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_addman = new QPushButton(tab);
        btn_addman->setObjectName(QString::fromUtf8("btn_addman"));

        horizontalLayout->addWidget(btn_addman);

        btn_reman = new QPushButton(tab);
        btn_reman->setObjectName(QString::fromUtf8("btn_reman"));

        horizontalLayout->addWidget(btn_reman);

        btn_deleteman = new QPushButton(tab);
        btn_deleteman->setObjectName(QString::fromUtf8("btn_deleteman"));

        horizontalLayout->addWidget(btn_deleteman);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        btn_search = new QPushButton(tab);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));

        horizontalLayout_2->addWidget(btn_search);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_all = new QPushButton(tab);
        btn_all->setObjectName(QString::fromUtf8("btn_all"));

        verticalLayout->addWidget(btn_all);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        btn_exit = new QPushButton(Manage);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        gridLayout->addWidget(btn_exit, 1, 1, 1, 1);


        retranslateUi(Manage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Manage);
    } // setupUi

    void retranslateUi(QWidget *Manage)
    {
        Manage->setWindowTitle(QApplication::translate("Manage", "Form", nullptr));
        btn_all_2->setText(QApplication::translate("Manage", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        btn_add->setText(QApplication::translate("Manage", "\346\267\273\345\212\240\345\233\276\344\271\246", nullptr));
        btn_re_book->setText(QApplication::translate("Manage", "\344\277\256\346\224\271\351\200\211\344\270\255\345\233\276\344\271\246", nullptr));
        btn_deletebook->setText(QApplication::translate("Manage", "\345\210\240\351\231\244\351\200\211\344\270\255\345\233\276\344\271\246", nullptr));
        label_3->setText(QApplication::translate("Manage", "\346\237\245\350\257\242\345\255\227\346\256\265", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("Manage", "\345\233\276\344\271\246\345\220\215\347\247\260", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Manage", "\344\275\234\350\200\205", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("Manage", "\344\270\223\344\270\232\351\242\206\345\237\237", nullptr));

        label_4->setText(QApplication::translate("Manage", "\346\237\245\350\257\242\344\277\241\346\201\257", nullptr));
        btn_search_2->setText(QApplication::translate("Manage", "\347\241\256\350\256\244\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Manage", "\345\233\276\344\271\246\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        btn_add_2->setText(QApplication::translate("Manage", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        btn_re_account->setText(QApplication::translate("Manage", "\344\277\256\346\224\271\351\200\211\344\270\255\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        btn_deleteaccount->setText(QApplication::translate("Manage", "\345\210\240\351\231\244\351\200\211\344\270\255\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        label_7->setText(QApplication::translate("Manage", "\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        btn_search_3->setText(QApplication::translate("Manage", "\347\241\256\350\256\244\346\237\245\350\257\242", nullptr));
        btn_all_3->setText(QApplication::translate("Manage", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Manage", "\347\224\250\346\210\267\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        btn_addman->setText(QApplication::translate("Manage", "\346\267\273\345\212\240\347\256\241\347\220\206\345\221\230", nullptr));
        btn_reman->setText(QApplication::translate("Manage", "\344\277\256\346\224\271\351\200\211\344\270\255\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257", nullptr));
        btn_deleteman->setText(QApplication::translate("Manage", "\345\210\240\351\231\244\351\200\211\344\270\255\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("Manage", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267\346\237\245\350\257\242", nullptr));
        btn_search->setText(QApplication::translate("Manage", "\347\241\256\350\256\244\346\237\245\350\257\242", nullptr));
        btn_all->setText(QApplication::translate("Manage", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Manage", "\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        btn_exit->setText(QApplication::translate("Manage", "\351\200\200\345\207\272\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manage: public Ui_Manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_H
