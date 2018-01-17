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

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QLabel *label_4;
    QSpinBox *spinBox_4;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(460, 278);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 240, 441, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(Dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 9, 444, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        checkBox = new QCheckBox(formLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, checkBox);

        spinBox = new QSpinBox(formLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBox_2 = new QSpinBox(formLayoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        spinBox_3 = new QSpinBox(formLayoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        spinBox_4 = new QSpinBox(formLayoutWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        spinBox_5 = new QSpinBox(formLayoutWidget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_5);

        checkBox_2 = new QCheckBox(formLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, checkBox_2);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Nombre de colonies au d\303\251part:", nullptr));
        checkBox->setText(QApplication::translate("Dialog", "Mode Demi-sel/Anti-Margarine/Bl\303\251-noire/Bigoud\303\250ne", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Nombre max de fourmis/colonies", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Nourriture pour une fourmi", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Dur\303\251e de vie des fourmis (cycles)", nullptr));
        label_5->setText(QApplication::translate("Dialog", "Nourriture pour cr\303\251er une reine", nullptr));
        checkBox_2->setText(QApplication::translate("Dialog", "Sa majest\303\251 Elisabeth II", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
