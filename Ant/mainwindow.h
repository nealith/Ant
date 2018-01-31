#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

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

private:
    Ui::MainWindow *ui;

private slots:
    void onOpenFileClicked();
    void onParameterOpenClicked();
    void onNewSimuClicked();
    void onSaveFileClicked();
    void onSaveAsClicked();
signals:
    void newSimuClicked();
    void parameterOpenClicked();
    void openFileClicked();
    void saveFileClicked();
    void saveAsClicked();
};

#endif // MAINWINDOW_H
