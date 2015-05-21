/********************************************************************************
** Form generated from reading UI file 'promotiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOTIONDIALOG_H
#define UI_PROMOTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_PromotionDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *btQueen;
    QToolButton *btRook;
    QToolButton *btBishop;
    QToolButton *btKnight;

    void setupUi(QDialog *PromotionDialog)
    {
        if (PromotionDialog->objectName().isEmpty())
            PromotionDialog->setObjectName(QStringLiteral("PromotionDialog"));
        PromotionDialog->setWindowModality(Qt::ApplicationModal);
        PromotionDialog->resize(216, 83);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PromotionDialog->sizePolicy().hasHeightForWidth());
        PromotionDialog->setSizePolicy(sizePolicy);
        PromotionDialog->setModal(false);
        horizontalLayout = new QHBoxLayout(PromotionDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btQueen = new QToolButton(PromotionDialog);
        btQueen->setObjectName(QStringLiteral("btQueen"));
        btQueen->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btQueen);

        btRook = new QToolButton(PromotionDialog);
        btRook->setObjectName(QStringLiteral("btRook"));
        btRook->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btRook);

        btBishop = new QToolButton(PromotionDialog);
        btBishop->setObjectName(QStringLiteral("btBishop"));
        btBishop->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btBishop);

        btKnight = new QToolButton(PromotionDialog);
        btKnight->setObjectName(QStringLiteral("btKnight"));
        btKnight->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btKnight);


        retranslateUi(PromotionDialog);
        QObject::connect(btQueen, SIGNAL(clicked()), PromotionDialog, SLOT(setIndex()));
        QObject::connect(btKnight, SIGNAL(clicked()), PromotionDialog, SLOT(setIndex()));
        QObject::connect(btBishop, SIGNAL(clicked()), PromotionDialog, SLOT(setIndex()));
        QObject::connect(btRook, SIGNAL(clicked()), PromotionDialog, SLOT(setIndex()));

        QMetaObject::connectSlotsByName(PromotionDialog);
    } // setupUi

    void retranslateUi(QDialog *PromotionDialog)
    {
        PromotionDialog->setWindowTitle(QApplication::translate("PromotionDialog", "Promote to", 0));
#ifndef QT_NO_TOOLTIP
        btQueen->setToolTip(QApplication::translate("PromotionDialog", "Queen", 0));
#endif // QT_NO_TOOLTIP
        btQueen->setText(QString());
#ifndef QT_NO_TOOLTIP
        btRook->setToolTip(QApplication::translate("PromotionDialog", "Rook", 0));
#endif // QT_NO_TOOLTIP
        btRook->setText(QString());
#ifndef QT_NO_TOOLTIP
        btBishop->setToolTip(QApplication::translate("PromotionDialog", "Bishop", 0));
#endif // QT_NO_TOOLTIP
        btBishop->setText(QString());
#ifndef QT_NO_TOOLTIP
        btKnight->setToolTip(QApplication::translate("PromotionDialog", "Knight", 0));
#endif // QT_NO_TOOLTIP
        btKnight->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PromotionDialog: public Ui_PromotionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOTIONDIALOG_H
