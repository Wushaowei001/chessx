/********************************************************************************
** Form generated from reading UI file 'analysiswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISWIDGET_H
#define UI_ANALYSISWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalysisWidget
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSpinBox *vpcount;
    QToolButton *btPin;
    QComboBox *engineList;
    QPushButton *analyzeButton;
    QWidget *boardView;
    QTextBrowser *variationText;

    void setupUi(QWidget *AnalysisWidget)
    {
        if (AnalysisWidget->objectName().isEmpty())
            AnalysisWidget->setObjectName(QStringLiteral("AnalysisWidget"));
        AnalysisWidget->resize(446, 268);
        AnalysisWidget->setMinimumSize(QSize(150, 80));
        vboxLayout = new QVBoxLayout(AnalysisWidget);
        vboxLayout->setSpacing(3);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(AnalysisWidget);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        vpcount = new QSpinBox(AnalysisWidget);
        vpcount->setObjectName(QStringLiteral("vpcount"));
        vpcount->setMinimum(1);
        vpcount->setMaximum(99);

        hboxLayout->addWidget(vpcount);

        btPin = new QToolButton(AnalysisWidget);
        btPin->setObjectName(QStringLiteral("btPin"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/pin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btPin->setIcon(icon);
        btPin->setCheckable(true);

        hboxLayout->addWidget(btPin);

        engineList = new QComboBox(AnalysisWidget);
        engineList->setObjectName(QStringLiteral("engineList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(engineList->sizePolicy().hasHeightForWidth());
        engineList->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(engineList);

        analyzeButton = new QPushButton(AnalysisWidget);
        analyzeButton->setObjectName(QStringLiteral("analyzeButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(analyzeButton->sizePolicy().hasHeightForWidth());
        analyzeButton->setSizePolicy(sizePolicy1);
        analyzeButton->setCheckable(true);

        hboxLayout->addWidget(analyzeButton);


        vboxLayout->addLayout(hboxLayout);

        boardView = new QWidget(AnalysisWidget);
        boardView->setObjectName(QStringLiteral("boardView"));

        vboxLayout->addWidget(boardView);

        variationText = new QTextBrowser(AnalysisWidget);
        variationText->setObjectName(QStringLiteral("variationText"));
        variationText->setOpenLinks(false);

        vboxLayout->addWidget(variationText);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(vpcount);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(vpcount, engineList);
        QWidget::setTabOrder(engineList, analyzeButton);
        QWidget::setTabOrder(analyzeButton, variationText);

        retranslateUi(AnalysisWidget);

        QMetaObject::connectSlotsByName(AnalysisWidget);
    } // setupUi

    void retranslateUi(QWidget *AnalysisWidget)
    {
        AnalysisWidget->setWindowTitle(QApplication::translate("AnalysisWidget", "Analysis", 0));
        label->setText(QApplication::translate("AnalysisWidget", "&Lines:", 0));
#ifndef QT_NO_TOOLTIP
        btPin->setToolTip(QApplication::translate("AnalysisWidget", "Pin engine to current position", 0));
#endif // QT_NO_TOOLTIP
        btPin->setText(QApplication::translate("AnalysisWidget", "...", 0));
        analyzeButton->setText(QApplication::translate("AnalysisWidget", "Analyze", 0));
    } // retranslateUi

};

namespace Ui {
    class AnalysisWidget: public Ui_AnalysisWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISWIDGET_H
