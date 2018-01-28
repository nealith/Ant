#ifndef SETTINGS_H
#define SETTINGS_H
#include <QDialog>
#include <QWidget>

class Settings : public QDialog
{
public:
    Settings(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
};

#endif // SETTINGS_H
