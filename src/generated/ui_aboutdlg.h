/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_18;
    QLabel *label_7;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *labelVersion;
    QLabel *labelCopyright;
    QLabel *labelCopyRightDate;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *labelMaintainer;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *labelTest;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbCode;
    QGroupBox *groupTranslate;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbTranslate;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label_19;
    QLabel *labelTempPath;
    QLabel *label_21;
    QLabel *labelDataPath;
    QLabel *label_5;
    QLabel *labelSettingsPath;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QLabel *label_20;
    QLabel *labelHomepage;
    QLabel *label_23;
    QLabel *labelMailingList;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QStringLiteral("AboutDlg"));
        AboutDlg->resize(517, 837);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/chessx.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDlg->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AboutDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(AboutDlg);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/images/chessx.png")));
        label_18->setScaledContents(false);

        horizontalLayout_2->addWidget(label_18);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);


        verticalLayout->addWidget(groupBox_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setVerticalSpacing(-1);
        formLayout->setContentsMargins(-1, 5, -1, 5);
        label_2 = new QLabel(AboutDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        labelVersion = new QLabel(AboutDlg);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        labelVersion->setFrameShape(QFrame::Panel);
        labelVersion->setFrameShadow(QFrame::Sunken);
        labelVersion->setText(QStringLiteral("vvv"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelVersion);

        labelCopyright = new QLabel(AboutDlg);
        labelCopyright->setObjectName(QStringLiteral("labelCopyright"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelCopyright);

        labelCopyRightDate = new QLabel(AboutDlg);
        labelCopyRightDate->setObjectName(QStringLiteral("labelCopyRightDate"));
        labelCopyRightDate->setFrameShape(QFrame::Panel);
        labelCopyRightDate->setFrameShadow(QFrame::Sunken);
        labelCopyRightDate->setText(QStringLiteral("ccc"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelCopyRightDate);

        label_3 = new QLabel(AboutDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_6 = new QLabel(AboutDlg);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Sunken);
        label_6->setText(QStringLiteral("GNU General Public License 2 - GPLv2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_6);

        labelMaintainer = new QLabel(AboutDlg);
        labelMaintainer->setObjectName(QStringLiteral("labelMaintainer"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelMaintainer);

        label_4 = new QLabel(AboutDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShape(QFrame::Panel);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setText(QStringLiteral("Jens Nissen"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_4);

        label_8 = new QLabel(AboutDlg);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(AboutDlg);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFrameShape(QFrame::Panel);
        label_9->setFrameShadow(QFrame::Sunken);
        label_9->setText(QStringLiteral("Michal Rudolf, Ejner Borgbjerg"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_9);

        labelTest = new QLabel(AboutDlg);
        labelTest->setObjectName(QStringLiteral("labelTest"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelTest);

        label_11 = new QLabel(AboutDlg);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFrameShape(QFrame::Panel);
        label_11->setFrameShadow(QFrame::Sunken);
        label_11->setText(QStringLiteral("Bruno Rizzuti"));

        formLayout->setWidget(5, QFormLayout::FieldRole, label_11);

        label_12 = new QLabel(AboutDlg);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(AboutDlg);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFrameShape(QFrame::Panel);
        label_13->setFrameShadow(QFrame::Sunken);
        label_13->setText(QStringLiteral("Jens Nissen"));

        formLayout->setWidget(6, QFormLayout::FieldRole, label_13);

        groupBox_4 = new QGroupBox(AboutDlg);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbCode = new QLabel(groupBox_4);
        lbCode->setObjectName(QStringLiteral("lbCode"));
        lbCode->setFrameShape(QFrame::Panel);
        lbCode->setFrameShadow(QFrame::Sunken);
        lbCode->setText(QLatin1String("James Coons\n"
"Marius Roets\n"
"Sean Estabrooks\n"
"Rico Zenklusen\n"
"Heinz Hopfgartner\n"
"William Hoggarth"));

        verticalLayout_3->addWidget(lbCode);


        formLayout->setWidget(7, QFormLayout::LabelRole, groupBox_4);

        groupTranslate = new QGroupBox(AboutDlg);
        groupTranslate->setObjectName(QStringLiteral("groupTranslate"));
        verticalLayout_2 = new QVBoxLayout(groupTranslate);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbTranslate = new QLabel(groupTranslate);
        lbTranslate->setObjectName(QStringLiteral("lbTranslate"));
        lbTranslate->setFrameShape(QFrame::Panel);
        lbTranslate->setFrameShadow(QFrame::Sunken);
        lbTranslate->setText(QString::fromUtf8("Byrial Jensen\n"
"Bruno Rizzuti\n"
"Jens Nissen\n"
"Joachim Katzer\n"
"Olivier Roset\n"
"Marcos A. Pi\303\261as"));

        verticalLayout_2->addWidget(lbTranslate);


        formLayout->setWidget(7, QFormLayout::FieldRole, groupTranslate);


        verticalLayout->addLayout(formLayout);

        groupBox = new QGroupBox(AboutDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_19);

        labelTempPath = new QLabel(groupBox);
        labelTempPath->setObjectName(QStringLiteral("labelTempPath"));
        labelTempPath->setFrameShape(QFrame::Panel);
        labelTempPath->setFrameShadow(QFrame::Sunken);
        labelTempPath->setText(QStringLiteral("ttt"));
        labelTempPath->setOpenExternalLinks(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelTempPath);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_21);

        labelDataPath = new QLabel(groupBox);
        labelDataPath->setObjectName(QStringLiteral("labelDataPath"));
        labelDataPath->setFrameShape(QFrame::Panel);
        labelDataPath->setFrameShadow(QFrame::Sunken);
        labelDataPath->setText(QStringLiteral("ddd"));
        labelDataPath->setOpenExternalLinks(false);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelDataPath);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        labelSettingsPath = new QLabel(groupBox);
        labelSettingsPath->setObjectName(QStringLiteral("labelSettingsPath"));
        labelSettingsPath->setFrameShape(QFrame::Panel);
        labelSettingsPath->setFrameShadow(QFrame::Sunken);
        labelSettingsPath->setText(QStringLiteral("sss"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelSettingsPath);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AboutDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_20);

        labelHomepage = new QLabel(groupBox_2);
        labelHomepage->setObjectName(QStringLiteral("labelHomepage"));
        labelHomepage->setFrameShape(QFrame::Panel);
        labelHomepage->setFrameShadow(QFrame::Sunken);
        labelHomepage->setText(QStringLiteral("<a href=\"http://chessx.sourceforge.net\">http://chessx.sourceforge.net</a>"));
        labelHomepage->setOpenExternalLinks(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, labelHomepage);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_23);

        labelMailingList = new QLabel(groupBox_2);
        labelMailingList->setObjectName(QStringLiteral("labelMailingList"));
        labelMailingList->setFrameShape(QFrame::Panel);
        labelMailingList->setFrameShadow(QFrame::Sunken);
        labelMailingList->setText(QStringLiteral("<a href=\"mailto:chessx-users@lists.sourceforge.net\">chessx-users@lists.sourceforge.net</a>"));
        labelMailingList->setOpenExternalLinks(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, labelMailingList);


        verticalLayout->addWidget(groupBox_2);

        line = new QFrame(AboutDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(AboutDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDlg);
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QDialog *AboutDlg)
    {
        AboutDlg->setWindowTitle(QApplication::translate("AboutDlg", "About ChessX", 0));
        groupBox_3->setTitle(QString());
        label_18->setText(QString());
        label_7->setText(QApplication::translate("AboutDlg", "<b>ChessX</b><br>\n"
"Free Chess Database ", 0));
        label_2->setText(QApplication::translate("AboutDlg", "Version", 0));
        labelCopyright->setText(QApplication::translate("AboutDlg", "Copyright", 0));
        label_3->setText(QApplication::translate("AboutDlg", "License", 0));
        labelMaintainer->setText(QApplication::translate("AboutDlg", "Maintainer", 0));
        label_8->setText(QApplication::translate("AboutDlg", "Further Maintainers", 0));
        labelTest->setText(QApplication::translate("AboutDlg", "Testing", 0));
        label_12->setText(QApplication::translate("AboutDlg", "Coders", 0));
        groupBox_4->setTitle(QApplication::translate("AboutDlg", "Further Code", 0));
        groupTranslate->setTitle(QApplication::translate("AboutDlg", "Translations", 0));
        groupBox->setTitle(QApplication::translate("AboutDlg", "Path Information", 0));
        label_19->setText(QApplication::translate("AboutDlg", "Path for temporary files", 0));
        label_21->setText(QApplication::translate("AboutDlg", "Program data path", 0));
        label_5->setText(QApplication::translate("AboutDlg", "Path to settings", 0));
        groupBox_2->setTitle(QApplication::translate("AboutDlg", "Contact", 0));
        label_20->setText(QApplication::translate("AboutDlg", "Homepage", 0));
        label_23->setText(QApplication::translate("AboutDlg", "Mailing List", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
