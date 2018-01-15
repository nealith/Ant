/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *nouvelleSimuBtn;
    QAction *ouvrirFichierBtn;
    QAction *sauvegardeFichierBtn;
    QAction *quitterSimuBtn;
    QAction *actionInfos_en_temps_r_el;
    QAction *action0_25;
    QAction *action0_5;
    QAction *action0_75;
    QAction *action1;
    QAction *action1_25;
    QAction *action1_5;
    QAction *action1_75;
    QAction *action2;
    QAction *actionNouvelle_colonie;
    QAction *actionD_poser_nourriture;
    QAction *action0_26;
    QAction *action0_6;
    QAction *action0_76;
    QAction *action1_2;
    QAction *action1_26;
    QAction *action1_6;
    QAction *action1_76;
    QAction *action2_2;
    QAction *ouvrirParamBtn;
    QAction *actionManuel;
    QAction *action_propos;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QFrame *frame;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAffichage;
    QMenu *menuZoom;
    QMenu *menuSimulation;
    QMenu *menuVitesse;
    QMenu *menuAide;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1066, 582);
        nouvelleSimuBtn = new QAction(MainWindow);
        nouvelleSimuBtn->setObjectName(QString::fromUtf8("nouvelleSimuBtn"));
        ouvrirFichierBtn = new QAction(MainWindow);
        ouvrirFichierBtn->setObjectName(QString::fromUtf8("ouvrirFichierBtn"));
        sauvegardeFichierBtn = new QAction(MainWindow);
        sauvegardeFichierBtn->setObjectName(QString::fromUtf8("sauvegardeFichierBtn"));
        quitterSimuBtn = new QAction(MainWindow);
        quitterSimuBtn->setObjectName(QString::fromUtf8("quitterSimuBtn"));
        actionInfos_en_temps_r_el = new QAction(MainWindow);
        actionInfos_en_temps_r_el->setObjectName(QString::fromUtf8("actionInfos_en_temps_r_el"));
        action0_25 = new QAction(MainWindow);
        action0_25->setObjectName(QString::fromUtf8("action0_25"));
        action0_5 = new QAction(MainWindow);
        action0_5->setObjectName(QString::fromUtf8("action0_5"));
        action0_75 = new QAction(MainWindow);
        action0_75->setObjectName(QString::fromUtf8("action0_75"));
        action1 = new QAction(MainWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        action1_25 = new QAction(MainWindow);
        action1_25->setObjectName(QString::fromUtf8("action1_25"));
        action1_5 = new QAction(MainWindow);
        action1_5->setObjectName(QString::fromUtf8("action1_5"));
        action1_75 = new QAction(MainWindow);
        action1_75->setObjectName(QString::fromUtf8("action1_75"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        actionNouvelle_colonie = new QAction(MainWindow);
        actionNouvelle_colonie->setObjectName(QString::fromUtf8("actionNouvelle_colonie"));
        actionD_poser_nourriture = new QAction(MainWindow);
        actionD_poser_nourriture->setObjectName(QString::fromUtf8("actionD_poser_nourriture"));
        action0_26 = new QAction(MainWindow);
        action0_26->setObjectName(QString::fromUtf8("action0_26"));
        action0_6 = new QAction(MainWindow);
        action0_6->setObjectName(QString::fromUtf8("action0_6"));
        action0_76 = new QAction(MainWindow);
        action0_76->setObjectName(QString::fromUtf8("action0_76"));
        action1_2 = new QAction(MainWindow);
        action1_2->setObjectName(QString::fromUtf8("action1_2"));
        action1_26 = new QAction(MainWindow);
        action1_26->setObjectName(QString::fromUtf8("action1_26"));
        action1_6 = new QAction(MainWindow);
        action1_6->setObjectName(QString::fromUtf8("action1_6"));
        action1_76 = new QAction(MainWindow);
        action1_76->setObjectName(QString::fromUtf8("action1_76"));
        action2_2 = new QAction(MainWindow);
        action2_2->setObjectName(QString::fromUtf8("action2_2"));
        ouvrirParamBtn = new QAction(MainWindow);
        ouvrirParamBtn->setObjectName(QString::fromUtf8("ouvrirParamBtn"));
        actionManuel = new QAction(MainWindow);
        actionManuel->setObjectName(QString::fromUtf8("actionManuel"));
        action_propos = new QAction(MainWindow);
        action_propos->setObjectName(QString::fromUtf8("action_propos"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalWidget = new QWidget(centralWidget);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        horizontalWidget->setMinimumSize(QSize(0, 40));
        horizontalWidget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSlider = new QSlider(horizontalWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        toolButton = new QToolButton(horizontalWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(horizontalWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);


        verticalLayout->addWidget(horizontalWidget);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"    background-color: rgb(78, 154, 6);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1066, 23));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QString::fromUtf8("menuAffichage"));
        menuZoom = new QMenu(menuAffichage);
        menuZoom->setObjectName(QString::fromUtf8("menuZoom"));
        menuSimulation = new QMenu(menuBar);
        menuSimulation->setObjectName(QString::fromUtf8("menuSimulation"));
        menuVitesse = new QMenu(menuSimulation);
        menuVitesse->setObjectName(QString::fromUtf8("menuVitesse"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuSimulation->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(nouvelleSimuBtn);
        menuFichier->addAction(ouvrirFichierBtn);
        menuFichier->addAction(sauvegardeFichierBtn);
        menuFichier->addAction(quitterSimuBtn);
        menuAffichage->addAction(actionInfos_en_temps_r_el);
        menuAffichage->addAction(menuZoom->menuAction());
        menuZoom->addAction(action0_25);
        menuZoom->addAction(action0_5);
        menuZoom->addAction(action0_75);
        menuZoom->addAction(action1);
        menuZoom->addAction(action1_25);
        menuZoom->addAction(action1_5);
        menuZoom->addAction(action1_75);
        menuZoom->addAction(action2);
        menuSimulation->addAction(actionNouvelle_colonie);
        menuSimulation->addAction(actionD_poser_nourriture);
        menuSimulation->addAction(menuVitesse->menuAction());
        menuSimulation->addAction(ouvrirParamBtn);
        menuVitesse->addAction(action0_26);
        menuVitesse->addAction(action0_6);
        menuVitesse->addAction(action0_76);
        menuVitesse->addAction(action1_2);
        menuVitesse->addAction(action1_26);
        menuVitesse->addAction(action1_6);
        menuVitesse->addAction(action1_76);
        menuVitesse->addAction(action2_2);
        menuAide->addAction(actionManuel);
        menuAide->addAction(action_propos);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        nouvelleSimuBtn->setText(QApplication::translate("MainWindow", "Nouveau", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nouvelleSimuBtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Cr\303\251er une nouvelle simulation</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nouvelleSimuBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        ouvrirFichierBtn->setText(QApplication::translate("MainWindow", "Ouvrir", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ouvrirFichierBtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Ouvrir une simulation existante</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ouvrirFichierBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        sauvegardeFichierBtn->setText(QApplication::translate("MainWindow", "Sauvegarder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sauvegardeFichierBtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Sauvegarde votre simulation</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sauvegardeFichierBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        quitterSimuBtn->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        quitterSimuBtn->setToolTip(QApplication::translate("MainWindow", "Quitter le programme", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        quitterSimuBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionInfos_en_temps_r_el->setText(QApplication::translate("MainWindow", "Infos en temps r\303\251el", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInfos_en_temps_r_el->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Affiche les chiffres de la simulation en temps r\303\251el: nombre de colonies, de nourriture...</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionInfos_en_temps_r_el->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        action0_25->setText(QApplication::translate("MainWindow", "0.25", 0, QApplication::UnicodeUTF8));
        action0_5->setText(QApplication::translate("MainWindow", "0.5", 0, QApplication::UnicodeUTF8));
        action0_75->setText(QApplication::translate("MainWindow", "0.75", 0, QApplication::UnicodeUTF8));
        action1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        action1_25->setText(QApplication::translate("MainWindow", "1.25", 0, QApplication::UnicodeUTF8));
        action1_5->setText(QApplication::translate("MainWindow", "1.5", 0, QApplication::UnicodeUTF8));
        action1_75->setText(QApplication::translate("MainWindow", "1.75", 0, QApplication::UnicodeUTF8));
        action2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        actionNouvelle_colonie->setText(QApplication::translate("MainWindow", "Nouvelle colonie", 0, QApplication::UnicodeUTF8));
        actionD_poser_nourriture->setText(QApplication::translate("MainWindow", "D\303\251poser nourriture", 0, QApplication::UnicodeUTF8));
        action0_26->setText(QApplication::translate("MainWindow", "0.25", 0, QApplication::UnicodeUTF8));
        action0_6->setText(QApplication::translate("MainWindow", "0.5", 0, QApplication::UnicodeUTF8));
        action0_76->setText(QApplication::translate("MainWindow", "0.75", 0, QApplication::UnicodeUTF8));
        action1_2->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        action1_26->setText(QApplication::translate("MainWindow", "1.25", 0, QApplication::UnicodeUTF8));
        action1_6->setText(QApplication::translate("MainWindow", "1.5", 0, QApplication::UnicodeUTF8));
        action1_76->setText(QApplication::translate("MainWindow", "1.75", 0, QApplication::UnicodeUTF8));
        action2_2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        ouvrirParamBtn->setText(QApplication::translate("MainWindow", "Param\303\250tres", 0, QApplication::UnicodeUTF8));
        ouvrirParamBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionManuel->setText(QApplication::translate("MainWindow", "Manuel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionManuel->setToolTip(QApplication::translate("MainWindow", "Ouvre le manuel utilisateur", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionManuel->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        action_propos->setText(QApplication::translate("MainWindow", "\303\200 propos", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Affichage", 0, QApplication::UnicodeUTF8));
        menuZoom->setTitle(QApplication::translate("MainWindow", "Zoom", 0, QApplication::UnicodeUTF8));
        menuSimulation->setTitle(QApplication::translate("MainWindow", "Simulation", 0, QApplication::UnicodeUTF8));
        menuVitesse->setTitle(QApplication::translate("MainWindow", "Vitesse", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
