/********************************************************************************
** Form generated from reading UI file 'loadquery.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADQUERY_H
#define UI_LOADQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadQuery
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelQuery;
    QRadioButton *btLargeDatabase;
    QRadioButton *btSmallDatabase;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadQuery)
    {
        if (LoadQuery->objectName().isEmpty())
            LoadQuery->setObjectName(QStringLiteral("LoadQuery"));
        LoadQuery->resize(345, 149);
        verticalLayout = new QVBoxLayout(LoadQuery);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelQuery = new QLabel(LoadQuery);
        labelQuery->setObjectName(QStringLiteral("labelQuery"));

        verticalLayout->addWidget(labelQuery);

        btLargeDatabase = new QRadioButton(LoadQuery);
        btLargeDatabase->setObjectName(QStringLiteral("btLargeDatabase"));
        btLargeDatabase->setChecked(true);

        verticalLayout->addWidget(btLargeDatabase);

        btSmallDatabase = new QRadioButton(LoadQuery);
        btSmallDatabase->setObjectName(QStringLiteral("btSmallDatabase"));

        verticalLayout->addWidget(btSmallDatabase);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(LoadQuery);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoadQuery);

        QMetaObject::connectSlotsByName(LoadQuery);
    } // setupUi

    void retranslateUi(QDialog *LoadQuery)
    {
        LoadQuery->setWindowTitle(QApplication::translate("LoadQuery", "Load Database", 0));
        labelQuery->setText(QApplication::translate("LoadQuery", "Currently, there are no databases configured.\n"
"Shall I download a database?", 0));
        btLargeDatabase->setText(QApplication::translate("LoadQuery", "Large Database (9M)", 0));
        btSmallDatabase->setText(QApplication::translate("LoadQuery", "Small Database", 0));
    } // retranslateUi

};

namespace Ui {
    class LoadQuery: public Ui_LoadQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADQUERY_H
