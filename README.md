# QT串口与网络调试助手
## 项目简介
本项目是一个基于QT框架开发的调试工具集合，适合QT初学者学习参考。项目包含串口调试助手、网络调试助手以及一个整合了串口和网络功能的综合调试工具，用户可以通过***标签页***自由切换串口或网络调试模式。   
## 功能模块 
### 1.串口调试助手
- 支持多种波特率选择（1200-115200）  
- 可配置数据位、停止位、校验位  
- 支持ASCII/Hex  
- 定时发送功能  
- 接收数据时间戳标记  
- 自动换行与清除接收区功能  
- 发送/接收字节计数统计  
![Serial](https://github.com/Lenmoncc/QT/blob/main/pictures/Serial.png)
### 2.网络调试助手
- 支持UDP、TCP客户端、TCP服务器三种模式  
- 端口号范围限制（0-65535）  
- 支持ASCII/Hex收发模式  
- 定时发送功能  
- 网络状态实时显示  
- 自动获取本机IP地址  
- 发送/接收字节计数统计  
![NET](https://github.com/Lenmoncc/QT/blob/main/pictures/NET.png)
### 3.综合调试工具
- 整合串口和网络调试功能  
- 通过**标签页**无缝切换工作模式  
- 各自保留独立的参数配置  
![NET&Serial](https://github.com/Lenmoncc/QT/blob/main/pictures/NET%26Serial/NET.png)
## 技术要点
- QT 窗口与界面布局管理  
- 信号与槽机制的实际应用  
- 串口通信（QSerialPort）  
- 网络通信（QUdpSocket、QTcpSocket、QTcpServer）  
- 定时器（QTimer）的使用  
- 数据格式转换（ASCII 与 Hex 互转）  
- 状态栏信息展示    
- UI 组件状态管理  
## 环境要求
- QT5.12及以上  
- Linux操作系统  
- 交叉编译工具  
## 其他
具体实现细节与处理逻辑详见个人学习文档
