#ifndef SETTINGS_H
#define SETTINGS_H
#include <QDialog>
#include <QWidget>

// utilisation de la classe Settings dans le package Ui
namespace Ui {
class Settings;
}

//cette classe est une QDialog
class Settings : public QDialog
{
    Q_OBJECT

public:
    //le constructeur doit être forcement explicit
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    void setupSignals();

private:
    //on a une UI qui fait partie du package UI
    Ui::Settings *ui;

private slots:
    void onNbAntHillStartChg(); //changement dans le nombre de colonies au départ
    void onMaxAntPerAntHillChg(); //changement dans le nombre de fourmis max par colonie
    void onAntLifeDurationChg(); //changement dans la durée de vie des fourmies
    void onFoodPerAntChg(); //changement dans la quantité de nourriture necessaire pour créer une fourmi
    void onFoodPerQueenChg(); // même chose pour la reine
    void onSaltButterEEClick(); //Easter Egg 1
    void onQueenElisabethEEClick(); //Easter Egg 2

signals:
    void nbAntHillStartChg();
    void maxAntPerAntHillChg();
    void antLifeDurationChg();
    void foodPerAntChg();
    void foodPerQueenChg();
    void saltButterEEClick();
    void queenElisabethEEClick();
};

#endif // SETTINGS_H
