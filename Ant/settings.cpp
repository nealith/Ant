#include "settings.h"
#include "ui_settings.h"
#include <QDebug>


Settings::Settings(QWidget *parent):QDialog(parent), ui(new Ui::Settings)
{
  ui->setupUi(this);
  foodQueen = 1000;
  foodAnt = 4;
  ratioWorkerSoldier = 0.5;
  antLifeTime = 5000;
  antLimit = 1000;
}

Settings::~Settings(){
    delete ui;
}

void Settings::setupSignals(){
    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(onFormValid()));
}

qint64 Settings::getFoodQueen() const
{
    return foodQueen;
}

void Settings::setFoodQueen(const qint64 &value)
{
    foodQueen = value;
}

qint64 Settings::getFoodAnt() const
{
    return foodAnt;
}

void Settings::setFoodAnt(const qint64 &value)
{
    foodAnt = value;
}

qint64 Settings::getRatioWorkerSoldier() const
{
    return ratioWorkerSoldier;
}

void Settings::setRatioWorkerSoldier(const qint64 &value)
{
    ratioWorkerSoldier = value;
}

qint64 Settings::getAntLifeTime() const
{
    return antLifeTime;
}

void Settings::setAntLifeTime(const qint64 &value)
{
    antLifeTime = value;
}

qint64 Settings::getAntLimit() const
{
    return antLimit;
}

void Settings::setAntLimit(const qint64 &value)
{
    antLimit = value;
}

qint64 Settings::getNbAnthill() const
{
    return nbAnthill;
}

void Settings::setNbAnthill(const qint64 &value)
{
    nbAnthill = value;
}

void Settings::onFormValid(){
    qDebug() << "Valid param";
    nbAnthill = ui->antHillSpinBox->value();
    foodQueen = ui->foodPerQueenSpinBox->value();
    foodAnt = ui->foodForAntSpinBox->value();
    antLifeTime = ui->lifeDurationSpinBox->value();
    antLimit = ui->maxAntSpinBox->value();
    ratioWorkerSoldier = ui->ratioWorkerSoldierDbSpinBox->value();
    emit paramValids();
}
