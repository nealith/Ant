#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QList>
#include <anthill.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setupSignals();
    void setupScene(QGraphicsScene * scene);
    qreal getSpeedFactor() const;
    void setSpeedFactor(const qreal &value);
    void setFood();
    void advance(QList<AntHill*> l);

private:
    Ui::MainWindow *ui;
    qreal speedFactor;

private slots:
    void onOpenFileClicked();
    void onParameterOpenClicked();
    void onNewSimuClicked();
    void onAddFoodClicked();
    void onSaveFileClicked();
    void onSaveAsClicked();
    void onSpeedChange();
    void onQuit();
    void onAskInfo();
    void onManuelClicked();
    void onAddAntHillClicked();
    void onPlayPauseClicked();

signals:
    void newSimuClicked();
    void parameterOpenClicked();
    void openFileClicked();
    void addFoodClicked();
    void saveFileClicked();
    void saveAsClicked();
    void speedChanged();
    void moreInfo();
    void showManual();
    void antHillClicked();
    void playPauseClicked();
};

#endif // MAINWINDOW_H
