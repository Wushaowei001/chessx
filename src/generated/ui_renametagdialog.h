/********************************************************************************
** Form generated from reading UI file 'renametagdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMETAGDIALOG_H
#define UI_RENAMETAGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenameTagDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelFrom;
    QLineEdit *editFrom;
    QLabel *labelTo;
    QLineEdit *editTo;
    QLabel *labelResult;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameTagDialog)
    {
        if (RenameTagDialog->objectName().isEmpty())
            RenameTagDialog->setObjectName(QStringLiteral("RenameTagDialog"));
        RenameTagDialog->setEnabled(true);
        RenameTagDialog->resize(509, 249);
        verticalLayout_2 = new QVBoxLayout(RenameTagDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(RenameTagDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelFrom = new QLabel(groupBox);
        labelFrom->setObjectName(QStringLiteral("labelFrom"));

        gridLayout->addWidget(labelFrom, 0, 0, 1, 1);

        editFrom = new QLineEdit(groupBox);
        editFrom->setObjectName(QStringLiteral("editFrom"));
        editFrom->setFocusPolicy(Qt::NoFocus);
        editFrom->setReadOnly(true);

        gridLayout->addWidget(editFrom, 0, 1, 1, 1);

        labelTo = new QLabel(groupBox);
        labelTo->setObjectName(QStringLiteral("labelTo"));

        gridLayout->addWidget(labelTo, 1, 0, 1, 1);

        editTo = new QLineEdit(groupBox);
        editTo->setObjectName(QStringLiteral("editTo"));

        gridLayout->addWidget(editTo, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        labelResult = new QLabel(groupBox);
        labelResult->setObjectName(QStringLiteral("labelResult"));

        verticalLayout->addWidget(labelResult);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox);

        line = new QFrame(RenameTagDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        buttonBox = new QDialogButtonBox(RenameTagDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(editTo, editFrom);

        retranslateUi(RenameTagDialog);

        QMetaObject::connectSlotsByName(RenameTagDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameTagDialog)
    {
        RenameTagDialog->setWindowTitle(QApplication::translate("RenameTagDialog", "Rename Tags in Database", 0));
        groupBox->setTitle(QApplication::translate("RenameTagDialog", "Rename all Occurrences ...", 0));
        labelFrom->setText(QApplication::translate("RenameTagDialog", "from", 0));
        labelTo->setText(QApplication::translate("RenameTagDialog", "to", 0));
        labelResult->setText(QApplication::translate("RenameTagDialog", "Press 'Rename' to proceed.", 0));
    } // retranslateUi

};

namespace Ui {
    class RenameTagDialog: public Ui_RenameTagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMETAGDIALOG_H
