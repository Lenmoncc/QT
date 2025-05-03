#include "mainwindow.h"
#include "serialdebugwidget.h"
#include "networkdebugwidget.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    // 初始化Tab容器
    tabWidget = new QTabWidget(this);
    setCentralWidget(tabWidget); // 设置为主窗口的中央部件

    // 创建子页面（自动加载各自的.ui文件）
    serialTab = new SerialDebugWidget();
    networkTab = new networkdebugwidget();

    // 添加Tab页
    tabWidget->addTab(serialTab, "串口调试");
    tabWidget->addTab(networkTab, "网络调试");

    setFixedSize(810, 580);
}
