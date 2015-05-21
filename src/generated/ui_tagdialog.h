/********************************************************************************
** Form generated from reading UI file 'tagdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGDIALOG_H
#define UI_TAGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TagDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tagTable;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btAddTag;
    QLabel *labelInfo;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TagDialog)
    {
        if (TagDialog->objectName().isEmpty())
            TagDialog->setObjectName(QStringLiteral("TagDialog"));
        TagDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(TagDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tagTable = new QTableWidget(TagDialog);
        if (tagTable->columnCount() < 2)
            tagTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tagTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tagTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tagTable->setObjectName(QStringLiteral("tagTable"));
        tagTable->setAlternatingRowColors(true);
        tagTable->setSortingEnabled(true);
        tagTable->setColumnCount(2);

        verticalLayout->addWidget(tagTable);

        line = new QFrame(TagDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btAddTag = new QToolButton(TagDialog);
        btAddTag->setObjectName(QStringLiteral("btAddTag"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btAddTag->setIcon(icon);

        horizontalLayout_2->addWidget(btAddTag);

        labelInfo = new QLabel(TagDialog);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));

        horizontalLayout_2->addWidget(labelInfo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(TagDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TagDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TagDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TagDialog, SLOT(reject()));
        QObject::connect(btAddTag, SIGNAL(clicked()), TagDialog, SLOT(slotAddTag()));

        QMetaObject::connectSlotsByName(TagDialog);
    } // setupUi

    void retranslateUi(QDialog *TagDialog)
    {
        TagDialog->setWindowTitle(QApplication::translate("TagDialog", "Edit Tags", 0));
        QTableWidgetItem *___qtablewidgetitem = tagTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TagDialog", "Tag", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tagTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TagDialog", "Value", 0));
        btAddTag->setText(QString());
        labelInfo->setText(QApplication::translate("TagDialog", "Deleting %1 tags", 0));
    } // retranslateUi

};

namespace Ui {
    class TagDialog: public Ui_TagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGDIALOG_H
