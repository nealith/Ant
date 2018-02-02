#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->speedFactor = 1;
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
    connect(ui->exeSpeedSlider,SIGNAL(valueChanged(int)),this,SLOT(onSpeedChange()));
    connect(ui->quitterSimuBtn,SIGNAL(triggered()),this,SLOT(onQuit()));
    connect(ui->aProposBtn,SIGNAL(triggered()),this,SLOT(onAskInfo()));
    connect(ui->actionManuel,SIGNAL(triggered(bool)),this,SLOT(onManuelClicked()));
    connect(ui->nouvelleSimuBtn,SIGNAL(triggered(bool)),this,SLOT(onNewSimuClicked()));
}

void MainWindow::setupScene(QGraphicsScene *scene)
{
    ui->graphicsView->setScene(scene);
}

qreal MainWindow::getSpeedFactor() const
{
    return speedFactor;
}

void MainWindow::setSpeedFactor(const qreal &value)
{
    speedFactor = value;
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


void MainWindow::onStatsUpdate(QList<AntHill *> l)
{}

void MainWindow::onSpeedChange(){
    qDebug() << "Speed changed";
    this->speedFactor = 1-(qreal(ui->exeSpeedSlider->value())-qreal(1))/qreal(ui->exeSpeedSlider->maximum());
    emit speedChanged();
}

void MainWindow::advance(QList<AntHill*> l){

}

void MainWindow::onQuit(){
    QCoreApplication::exit();
}

void MainWindow::onAskInfo(){
    qDebug() << "askMoreInfo";
    emit moreInfo();
}

void MainWindow::onManuelClicked(){
    emit showManual();
}
