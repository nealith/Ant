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

    qint64 getFoodQueen() const;
    void setFoodQueen(const qint64 &value);

    qint64 getFoodAnt() const;
    void setFoodAnt(const qint64 &value);

    qint64 getRatioWorkerSoldier() const;
    void setRatioWorkerSoldier(const qint64 &value);

    qint64 getAntLifeTime() const;
    void setAntLifeTime(const qint64 &value);

    qint64 getAntLimit() const;
    void setAntLimit(const qint64 &value);

private:
    //on a une UI qui fait partie du package UI
    Ui::Settings *ui;
    qint64 foodQueen;
    qint64 foodAnt;
    qint64 ratioWorkerSoldier;
    qint64 antLifeTime;
    qint64 antLimit;

private slots:
    void onFormValid(); //changement dans le nombre de colonies au départ

signals:
    void paramValids();
};

#endif // SETTINGS_H
