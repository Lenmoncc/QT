#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include "serialdebugwidget.h"
#include "networkdebugwidget.h"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    QTabWidget *tabWidget;
    SerialDebugWidget *serialTab;
    networkdebugwidget *networkTab;
};

#endif // MAINWINDOW_H
