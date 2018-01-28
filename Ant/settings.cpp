#include "settings.h"
#include "ui_settings.h"
#include <QDebug>


Settings::Settings(QWidget *parent):QDialog(parent), ui(new Ui::Settings)
{
  ui->setupUi(this);
}

Settings::~Settings(){
    delete ui;
}

void Settings::onNbAntHillStartChg(){
    qDebug() << "Value of AntHill on start changed";
}

void Settings::onMaxAntPerAntHillChg(){
    qDebug() << "Ant per AntHill changed";
}

void Settings::onAntLifeDurationChg(){
    qDebug() << "Ant duration changed";
}

void Settings::onFoodPerAntChg(){
    qDebug() << "Food per Ant changed";
}

void Settings::onFoodPerQueenChg(){
    qDebug() << "Food per Queen Changed";
}

void Settings::onSaltButterEEClick(){
    qDebug() << "Easter Egg changed";
}

void Settings::onQueenElisabethEEClick(){
    qDebug() << "Easter Egg changed";
}
