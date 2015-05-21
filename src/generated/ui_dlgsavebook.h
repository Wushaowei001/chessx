/********************************************************************************
** Form generated from reading UI file 'dlgsavebook.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSAVEBOOK_H
#define UI_DLGSAVEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DlgSaveBook
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupInput;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *inputFile;
    QGroupBox *groupParameter;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *lbMaxPly;
    QSpinBox *minGame;
    QSpinBox *maxPly;
    QLabel *lbMinGame;
    QCheckBox *cbUniform;
    QGroupBox *groupOutput;
    QHBoxLayout *horizontalLayout;
    QLineEdit *outputPath;
    QToolButton *btBrowseTarget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DlgSaveBook)
    {
        if (DlgSaveBook->objectName().isEmpty())
            DlgSaveBook->setObjectName(QStringLiteral("DlgSaveBook"));
        DlgSaveBook->resize(370, 339);
        verticalLayout_2 = new QVBoxLayout(DlgSaveBook);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupInput = new QGroupBox(DlgSaveBook);
        groupInput->setObjectName(QStringLiteral("groupInput"));
        horizontalLayout_2 = new QHBoxLayout(groupInput);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        inputFile = new QLineEdit(groupInput);
        inputFile->setObjectName(QStringLiteral("inputFile"));
        inputFile->setReadOnly(true);

        horizontalLayout_2->addWidget(inputFile);


        verticalLayout_2->addWidget(groupInput);

        groupParameter = new QGroupBox(DlgSaveBook);
        groupParameter->setObjectName(QStringLiteral("groupParameter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupParameter->sizePolicy().hasHeightForWidth());
        groupParameter->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(groupParameter);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        lbMaxPly = new QLabel(groupParameter);
        lbMaxPly->setObjectName(QStringLiteral("lbMaxPly"));

        gridLayout_4->addWidget(lbMaxPly, 0, 0, 1, 1);

        minGame = new QSpinBox(groupParameter);
        minGame->setObjectName(QStringLiteral("minGame"));
        minGame->setMinimum(1);
        minGame->setValue(3);

        gridLayout_4->addWidget(minGame, 1, 1, 1, 1);

        maxPly = new QSpinBox(groupParameter);
        maxPly->setObjectName(QStringLiteral("maxPly"));
        maxPly->setMinimum(4);
        maxPly->setValue(20);

        gridLayout_4->addWidget(maxPly, 0, 1, 1, 1);

        lbMinGame = new QLabel(groupParameter);
        lbMinGame->setObjectName(QStringLiteral("lbMinGame"));

        gridLayout_4->addWidget(lbMinGame, 1, 0, 1, 1);


        verticalLayout_8->addLayout(gridLayout_4);

        cbUniform = new QCheckBox(groupParameter);
        cbUniform->setObjectName(QStringLiteral("cbUniform"));

        verticalLayout_8->addWidget(cbUniform);


        verticalLayout_2->addWidget(groupParameter);

        groupOutput = new QGroupBox(DlgSaveBook);
        groupOutput->setObjectName(QStringLiteral("groupOutput"));
        horizontalLayout = new QHBoxLayout(groupOutput);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        outputPath = new QLineEdit(groupOutput);
        outputPath->setObjectName(QStringLiteral("outputPath"));
        outputPath->setEnabled(true);
        outputPath->setReadOnly(false);

        horizontalLayout->addWidget(outputPath);

        btBrowseTarget = new QToolButton(groupOutput);
        btBrowseTarget->setObjectName(QStringLiteral("btBrowseTarget"));

        horizontalLayout->addWidget(btBrowseTarget);


        verticalLayout_2->addWidget(groupOutput);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DlgSaveBook);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lbMaxPly->setBuddy(maxPly);
        lbMinGame->setBuddy(minGame);
#endif // QT_NO_SHORTCUT

        retranslateUi(DlgSaveBook);
        QObject::connect(buttonBox, SIGNAL(accepted()), DlgSaveBook, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DlgSaveBook, SLOT(reject()));

        QMetaObject::connectSlotsByName(DlgSaveBook);
    } // setupUi

    void retranslateUi(QDialog *DlgSaveBook)
    {
        DlgSaveBook->setWindowTitle(QApplication::translate("DlgSaveBook", "Build Polyglot Book", 0));
        groupInput->setTitle(QApplication::translate("DlgSaveBook", "Input File", 0));
        groupParameter->setTitle(QApplication::translate("DlgSaveBook", "Polyglot Book Parameters", 0));
        lbMaxPly->setText(QApplication::translate("DlgSaveBook", "Max Ply", 0));
        lbMinGame->setText(QApplication::translate("DlgSaveBook", "Min Game", 0));
        cbUniform->setText(QApplication::translate("DlgSaveBook", "Uniform Probabilities", 0));
        groupOutput->setTitle(QApplication::translate("DlgSaveBook", "Output Path", 0));
#ifndef QT_NO_TOOLTIP
        outputPath->setToolTip(QApplication::translate("DlgSaveBook", "Enter the complete target path", 0));
#endif // QT_NO_TOOLTIP
        btBrowseTarget->setText(QApplication::translate("DlgSaveBook", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class DlgSaveBook: public Ui_DlgSaveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSAVEBOOK_H
