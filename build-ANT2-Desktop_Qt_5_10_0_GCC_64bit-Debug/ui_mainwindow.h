/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QLabel *label;
    QSlider *horizontalSlider;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QGraphicsView *graphicsView;
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1066, 582);
        nouvelleSimuBtn = new QAction(MainWindow);
        nouvelleSimuBtn->setObjectName(QStringLiteral("nouvelleSimuBtn"));
        ouvrirFichierBtn = new QAction(MainWindow);
        ouvrirFichierBtn->setObjectName(QStringLiteral("ouvrirFichierBtn"));
        sauvegardeFichierBtn = new QAction(MainWindow);
        sauvegardeFichierBtn->setObjectName(QStringLiteral("sauvegardeFichierBtn"));
        quitterSimuBtn = new QAction(MainWindow);
        quitterSimuBtn->setObjectName(QStringLiteral("quitterSimuBtn"));
        actionInfos_en_temps_r_el = new QAction(MainWindow);
        actionInfos_en_temps_r_el->setObjectName(QStringLiteral("actionInfos_en_temps_r_el"));
        action0_25 = new QAction(MainWindow);
        action0_25->setObjectName(QStringLiteral("action0_25"));
        action0_5 = new QAction(MainWindow);
        action0_5->setObjectName(QStringLiteral("action0_5"));
        action0_75 = new QAction(MainWindow);
        action0_75->setObjectName(QStringLiteral("action0_75"));
        action1 = new QAction(MainWindow);
        action1->setObjectName(QStringLiteral("action1"));
        action1_25 = new QAction(MainWindow);
        action1_25->setObjectName(QStringLiteral("action1_25"));
        action1_5 = new QAction(MainWindow);
        action1_5->setObjectName(QStringLiteral("action1_5"));
        action1_75 = new QAction(MainWindow);
        action1_75->setObjectName(QStringLiteral("action1_75"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QStringLiteral("action2"));
        actionNouvelle_colonie = new QAction(MainWindow);
        actionNouvelle_colonie->setObjectName(QStringLiteral("actionNouvelle_colonie"));
        actionD_poser_nourriture = new QAction(MainWindow);
        actionD_poser_nourriture->setObjectName(QStringLiteral("actionD_poser_nourriture"));
        action0_26 = new QAction(MainWindow);
        action0_26->setObjectName(QStringLiteral("action0_26"));
        action0_6 = new QAction(MainWindow);
        action0_6->setObjectName(QStringLiteral("action0_6"));
        action0_76 = new QAction(MainWindow);
        action0_76->setObjectName(QStringLiteral("action0_76"));
        action1_2 = new QAction(MainWindow);
        action1_2->setObjectName(QStringLiteral("action1_2"));
        action1_26 = new QAction(MainWindow);
        action1_26->setObjectName(QStringLiteral("action1_26"));
        action1_6 = new QAction(MainWindow);
        action1_6->setObjectName(QStringLiteral("action1_6"));
        action1_76 = new QAction(MainWindow);
        action1_76->setObjectName(QStringLiteral("action1_76"));
        action2_2 = new QAction(MainWindow);
        action2_2->setObjectName(QStringLiteral("action2_2"));
        ouvrirParamBtn = new QAction(MainWindow);
        ouvrirParamBtn->setObjectName(QStringLiteral("ouvrirParamBtn"));
        actionManuel = new QAction(MainWindow);
        actionManuel->setObjectName(QStringLiteral("actionManuel"));
        action_propos = new QAction(MainWindow);
        action_propos->setObjectName(QStringLiteral("action_propos"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalWidget = new QWidget(centralWidget);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
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
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(horizontalWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(horizontalWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        toolButton = new QToolButton(horizontalWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(horizontalWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);


        verticalLayout->addWidget(horizontalWidget);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1066, 22));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        menuZoom = new QMenu(menuAffichage);
        menuZoom->setObjectName(QStringLiteral("menuZoom"));
        menuSimulation = new QMenu(menuBar);
        menuSimulation->setObjectName(QStringLiteral("menuSimulation"));
        menuVitesse = new QMenu(menuSimulation);
        menuVitesse->setObjectName(QStringLiteral("menuVitesse"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        nouvelleSimuBtn->setText(QApplication::translate("MainWindow", "&Nouveau", nullptr));
#ifndef QT_NO_TOOLTIP
        nouvelleSimuBtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Cr\303\251er une nouvelle simulation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        nouvelleSimuBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        ouvrirFichierBtn->setText(QApplication::translate("MainWindow", "&Ouvrir", nullptr));
#ifndef QT_NO_TOOLTIP
        ouvrirFichierBtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Ouvrir une simulation existante</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        ouvrirFichierBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        sauvegardeFichierBtn->setText(QApplication::translate("MainWindow", "&Sauvegarder", nullptr));
#ifndef QT_NO_TOOLTIP
        sauvegardeFichierBtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Sauvegarde votre simulation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        sauvegardeFichierBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        quitterSimuBtn->setText(QApplication::translate("MainWindow", "&Quitter", nullptr));
#ifndef QT_NO_TOOLTIP
        quitterSimuBtn->setToolTip(QApplication::translate("MainWindow", "Quitter le programme", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        quitterSimuBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionInfos_en_temps_r_el->setText(QApplication::translate("MainWindow", "&Infos en temps r\303\251el", nullptr));
#ifndef QT_NO_TOOLTIP
        actionInfos_en_temps_r_el->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Affiche les chiffres de la simulation en temps r\303\251el: nombre de colonies, de nourriture...</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionInfos_en_temps_r_el->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        action0_25->setText(QApplication::translate("MainWindow", "&0.25", nullptr));
        action0_5->setText(QApplication::translate("MainWindow", "0.&5", nullptr));
        action0_75->setText(QApplication::translate("MainWindow", "0.&75", nullptr));
        action1->setText(QApplication::translate("MainWindow", "&1", nullptr));
        action1_25->setText(QApplication::translate("MainWindow", "1.25", nullptr));
        action1_5->setText(QApplication::translate("MainWindow", "1.5", nullptr));
        action1_75->setText(QApplication::translate("MainWindow", "1.75", nullptr));
        action2->setText(QApplication::translate("MainWindow", "&2", nullptr));
        actionNouvelle_colonie->setText(QApplication::translate("MainWindow", "&Nouvelle colonie", nullptr));
        actionD_poser_nourriture->setText(QApplication::translate("MainWindow", "&D\303\251poser nourriture", nullptr));
        action0_26->setText(QApplication::translate("MainWindow", "&0.25", nullptr));
        action0_6->setText(QApplication::translate("MainWindow", "0.&5", nullptr));
        action0_76->setText(QApplication::translate("MainWindow", "0.&75", nullptr));
        action1_2->setText(QApplication::translate("MainWindow", "&1", nullptr));
        action1_26->setText(QApplication::translate("MainWindow", "1.25", nullptr));
        action1_6->setText(QApplication::translate("MainWindow", "1.5", nullptr));
        action1_76->setText(QApplication::translate("MainWindow", "1.75", nullptr));
        action2_2->setText(QApplication::translate("MainWindow", "&2", nullptr));
        ouvrirParamBtn->setText(QApplication::translate("MainWindow", "&Param\303\250tres", nullptr));
#ifndef QT_NO_SHORTCUT
        ouvrirParamBtn->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionManuel->setText(QApplication::translate("MainWindow", "&Manuel", nullptr));
#ifndef QT_NO_TOOLTIP
        actionManuel->setToolTip(QApplication::translate("MainWindow", "Ouvre le manuel utilisateur", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionManuel->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        action_propos->setText(QApplication::translate("MainWindow", "&\303\200 propos", nullptr));
        label->setText(QApplication::translate("MainWindow", "Vitesse d'execution", nullptr));
        toolButton->setText(QApplication::translate("MainWindow", "Add Food", nullptr));
        toolButton_2->setText(QApplication::translate("MainWindow", "Add anthill", nullptr));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fic&hier", nullptr));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Afficha&ge", nullptr));
        menuZoom->setTitle(QApplication::translate("MainWindow", "&Zoom", nullptr));
        menuSimulation->setTitle(QApplication::translate("MainWindow", "Si&mulation", nullptr));
        menuVitesse->setTitle(QApplication::translate("MainWindow", "&Vitesse", nullptr));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
