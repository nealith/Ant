#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;

private slots:
    void onOpenFileClicked();
    void onParameterOpenClicked();
    void onNewSimuClicked();

signals:
    void newSimuClicked();
    void parameterOpenClicked();
    void openFileClicked();
};

#endif // MAINWINDOW_H
