/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView_1;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *btn_search;
    QPushButton *btn_all;
    QPushButton *btn_ok;
    QPushButton *btn_exit;
    QWidget *tab_2;
    QTableView *tableView_2;
    QPushButton *btn_back;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(1000, 450);
        horizontalLayout_5 = new QHBoxLayout(Home);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(Home);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView_1 = new QTableView(tab);
        tableView_1->setObjectName(QString::fromUtf8("tableView_1"));
        tableView_1->setGeometry(QRect(0, 0, 1011, 221));
        widget_2 = new QWidget(tab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(20, 250, 301, 151));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        btn_search = new QPushButton(widget_3);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));

        horizontalLayout_2->addWidget(btn_search);


        verticalLayout->addWidget(widget_3);

        btn_all = new QPushButton(widget_2);
        btn_all->setObjectName(QString::fromUtf8("btn_all"));

        verticalLayout->addWidget(btn_all);

        btn_ok = new QPushButton(tab);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(330, 320, 121, 28));
        btn_exit = new QPushButton(tab);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(910, 390, 81, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(0, 0, 1011, 221));
        btn_back = new QPushButton(tab_2);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(40, 240, 101, 28));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_5->addWidget(tabWidget);


        retranslateUi(Home);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Form", nullptr));
        label->setText(QApplication::translate("Home", "\346\237\245\350\257\242\345\255\227\346\256\265", nullptr));
        comboBox->setItemText(0, QApplication::translate("Home", "\345\233\276\344\271\246\345\220\215\347\247\260", nullptr));
        comboBox->setItemText(1, QApplication::translate("Home", "\344\275\234\350\200\205", nullptr));
        comboBox->setItemText(2, QApplication::translate("Home", "\344\270\223\344\270\232\351\242\206\345\237\237", nullptr));

        label_2->setText(QApplication::translate("Home", "\346\237\245\350\257\242\344\277\241\346\201\257", nullptr));
        btn_search->setText(QApplication::translate("Home", "\347\241\256\350\256\244\346\237\245\350\257\242", nullptr));
        btn_all->setText(QApplication::translate("Home", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        btn_ok->setText(QApplication::translate("Home", "\345\200\237\351\230\205\346\211\200\351\200\211\344\271\246\347\261\215", nullptr));
        btn_exit->setText(QApplication::translate("Home", "\351\200\200\345\207\272\350\264\246\345\217\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Home", "\345\233\276\344\271\246\346\237\245\350\257\242", nullptr));
        btn_back->setText(QApplication::translate("Home", "\345\275\222\350\277\230\346\211\200\351\200\211\344\271\246\347\261\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Home", "\346\210\221\347\232\204\345\200\237\351\230\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
