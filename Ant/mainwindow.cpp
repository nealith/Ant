#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupSignals(){
    connect(ui->ouvrirParamBtn,SIGNAL(triggered()),this,SLOT(onParameterOpenClicked())); //on connect le click du bouton à la méthode de la vue
    connect(ui->ouvrirFichierBtn,SIGNAL(triggered()),this,SLOT(onOpenFileClicked()));
    connect(ui->nouvelleSimuBtn,SIGNAL(triggered()),this,SLOT(onNewSimuClicked()));
    connect(ui->addFoodBtn,SIGNAL(clicked()),this,SLOT(onAddFoodClicked()));
    connect(ui->sauvegardeSousFichierBtn,SIGNAL(triggered()),this,SLOT(onSaveAsClicked()));
    connect(ui->sauvegardeFichierBtn,SIGNAL(triggered()),this,SLOT(onSaveFileClicked()));
}

void MainWindow::setupScene(QGraphicsScene *scene)
{
    scene->setSceneRect(0,0,this->width(),this->height());
    ui->graphicsView->setScene(scene);
}

void MainWindow::onOpenFileClicked(){
    qDebug() << "Clicked on open File";
    emit openFileClicked();
}


void MainWindow::onParameterOpenClicked(){
    qDebug() << "clicked on openParam menu";
    emit parameterOpenClicked();
}

void MainWindow::onAddFoodClicked(){
    qDebug() << "clicked on Add food";
    emit addFoodClicked();
}

void MainWindow::onNewSimuClicked(){
    qDebug() << "Clicked on new simu menu";
    emit newSimuClicked(); //on emet le signal d'ouverture (perçu par le controlleur)
}

void MainWindow::onSaveFileClicked(){
    qDebug() << "Clicked on saveFile menu";
    emit saveFileClicked();
}

void MainWindow::onSaveAsClicked(){
    qDebug() << "Clicked on save as menu";
    emit saveAsClicked();
}
