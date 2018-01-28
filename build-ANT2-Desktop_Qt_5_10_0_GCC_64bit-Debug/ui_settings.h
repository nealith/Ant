/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *britainEasterEggChkBox;
    QSpinBox *antHillSpinBox;
    QLabel *label_2;
    QSpinBox *maxAntSpinBox;
    QLabel *label_3;
    QSpinBox *foodForAntSpinBox;
    QLabel *label_4;
    QSpinBox *lifeDurationSpinBox;
    QLabel *label_5;
    QSpinBox *foodPerQueenSpinBox;
    QCheckBox *englishEasterEggChkBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(460, 278);
        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 240, 441, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(Settings);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 9, 444, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        britainEasterEggChkBox = new QCheckBox(formLayoutWidget);
        britainEasterEggChkBox->setObjectName(QStringLiteral("britainEasterEggChkBox"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, britainEasterEggChkBox);

        antHillSpinBox = new QSpinBox(formLayoutWidget);
        antHillSpinBox->setObjectName(QStringLiteral("antHillSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, antHillSpinBox);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        maxAntSpinBox = new QSpinBox(formLayoutWidget);
        maxAntSpinBox->setObjectName(QStringLiteral("maxAntSpinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, maxAntSpinBox);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        foodForAntSpinBox = new QSpinBox(formLayoutWidget);
        foodForAntSpinBox->setObjectName(QStringLiteral("foodForAntSpinBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, foodForAntSpinBox);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lifeDurationSpinBox = new QSpinBox(formLayoutWidget);
        lifeDurationSpinBox->setObjectName(QStringLiteral("lifeDurationSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lifeDurationSpinBox);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        foodPerQueenSpinBox = new QSpinBox(formLayoutWidget);
        foodPerQueenSpinBox->setObjectName(QStringLiteral("foodPerQueenSpinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, foodPerQueenSpinBox);

        englishEasterEggChkBox = new QCheckBox(formLayoutWidget);
        englishEasterEggChkBox->setObjectName(QStringLiteral("englishEasterEggChkBox"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, englishEasterEggChkBox);


        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", nullptr));
        label->setText(QApplication::translate("Settings", "Nombre de colonies au d\303\251part:", nullptr));
        britainEasterEggChkBox->setText(QApplication::translate("Settings", "Mode Demi-sel/Anti-Margarine/Bl\303\251-noire/Bigoud\303\250ne", nullptr));
        label_2->setText(QApplication::translate("Settings", "Nombre max de fourmis/colonies", nullptr));
        label_3->setText(QApplication::translate("Settings", "Nourriture pour une fourmi", nullptr));
        label_4->setText(QApplication::translate("Settings", "Dur\303\251e de vie des fourmis (cycles)", nullptr));
        label_5->setText(QApplication::translate("Settings", "Nourriture pour cr\303\251er une reine", nullptr));
        englishEasterEggChkBox->setText(QApplication::translate("Settings", "Sa majest\303\251 Elisabeth II", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
