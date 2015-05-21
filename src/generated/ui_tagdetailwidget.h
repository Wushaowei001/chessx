/********************************************************************************
** Form generated from reading UI file 'tagdetailwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGDETAILWIDGET_H
#define UI_TAGDETAILWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "textbrowserex.h"

QT_BEGIN_NAMESPACE

class Ui_TagDetailWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *leftWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *filterEdit;
    QListView *tagList;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *filterDatabase;
    QPushButton *renameItem;
    QWidget *rightWidget;
    QVBoxLayout *verticalLayout_2;
    TextBrowserEx *detailText;

    void setupUi(QWidget *TagDetailWidget)
    {
        if (TagDetailWidget->objectName().isEmpty())
            TagDetailWidget->setObjectName(QStringLiteral("TagDetailWidget"));
        TagDetailWidget->resize(344, 302);
        TagDetailWidget->setWindowTitle(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(TagDetailWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(TagDetailWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(4);
        leftWidget = new QWidget(splitter);
        leftWidget->setObjectName(QStringLiteral("leftWidget"));
        verticalLayout = new QVBoxLayout(leftWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 6, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(leftWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        filterEdit = new QLineEdit(leftWidget);
        filterEdit->setObjectName(QStringLiteral("filterEdit"));

        horizontalLayout_2->addWidget(filterEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        tagList = new QListView(leftWidget);
        tagList->setObjectName(QStringLiteral("tagList"));
        tagList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tagList->setAlternatingRowColors(true);

        verticalLayout->addWidget(tagList);

        groupBox = new QGroupBox(leftWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        filterDatabase = new QPushButton(groupBox);
        filterDatabase->setObjectName(QStringLiteral("filterDatabase"));

        horizontalLayout_4->addWidget(filterDatabase);

        renameItem = new QPushButton(groupBox);
        renameItem->setObjectName(QStringLiteral("renameItem"));

        horizontalLayout_4->addWidget(renameItem);


        verticalLayout->addWidget(groupBox);

        splitter->addWidget(leftWidget);
        rightWidget = new QWidget(splitter);
        rightWidget->setObjectName(QStringLiteral("rightWidget"));
        verticalLayout_2 = new QVBoxLayout(rightWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, -1, -1);
        detailText = new TextBrowserEx(rightWidget);
        detailText->setObjectName(QStringLiteral("detailText"));

        verticalLayout_2->addWidget(detailText);

        splitter->addWidget(rightWidget);

        verticalLayout_3->addWidget(splitter);


        retranslateUi(TagDetailWidget);

        QMetaObject::connectSlotsByName(TagDetailWidget);
    } // setupUi

    void retranslateUi(QWidget *TagDetailWidget)
    {
        label->setText(QApplication::translate("TagDetailWidget", "Filter:", 0));
#ifndef QT_NO_TOOLTIP
        tagList->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("TagDetailWidget", "Selected Item", 0));
        filterDatabase->setText(QApplication::translate("TagDetailWidget", "Filter", 0));
        renameItem->setText(QApplication::translate("TagDetailWidget", "Rename", 0));
        Q_UNUSED(TagDetailWidget);
    } // retranslateUi

};

namespace Ui {
    class TagDetailWidget: public Ui_TagDetailWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGDETAILWIDGET_H
