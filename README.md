## MyQtProject

Practice projects

这部分是本人对Qt开发进行学习的项目记录，具体项目和实现功能在下部分，如果您想使用可以下载安装Qt开发软件，下载项目文件在Qt中打开.pro文件即可。

### MyAssistant:

本项目在本地进行测试实验，您需要事先准备USB转TTL的单片机（网上购买即可）。

本项目实现了一款可视化的串口通信调试工具，用于测试与调试嵌入式设备或串口模块通信。用户可通过界面完成串口参数配置、数据发送与接收、自动循环发送、HEX 编码显示与文件保存等功能。

一：串口通信模块：

-   使用 QSerialPort 实现串口的打开、关闭、数据收发。
-   支持波特率、数据位、校验位、停止位、流控方式等多参数配置。
-   实现实时串口设备刷新与占用检测，防止端口冲突。

二:数据处理模块：

-   支持 ASCII / HEX 编码收发模式切换。
-   实现自动发送、循环发送、带时间戳发送等高级功能。
-   使用 QTimer 定时触发周期发送任务；

三：文件与UI功能：

-   支持自定义指令模板的保存与加载（TXT 格式），可一键调用。
-   实现多组命令按钮绑定（可配置文本与HEX选项）。
-   支持历史记录保存与查看，界面可隐藏/展开以优化操作体验。
-   使用 QDateTime 实现系统时间动态显示。

<img width="704" height="656" alt="image" src="https://github.com/user-attachments/assets/ace03631-b388-4891-b129-44a11a6d66c3" />

### MyServer:

本项目实现了一个跨平台的TCP网络通信调试工具，包含客户端与服务器端两个模块，可用于测试与分析网络通信逻辑。用户可以在图形界面中轻松建立 TCP 连接、发送和接收消息，并监控连接状态。

使用 QTcpServer 和 QTcpSocket 实现 TCP 长连接通信机制；

- 客户端支持自动连接、断开、超时检测与错误处理；
- 服务器端支持多客户端接入、消息广播与单发；
- 利用信号槽机制实时刷新 UI 状态与消息显示；
- 优化用户交互体验，实现不同颜色区分消息来源；
- 设计灵活的端口与 IP 管理功能，自动检测本地 IPv4 地址。

<img width="1165" height="598" alt="image" src="https://github.com/user-attachments/assets/e9c5fcce-7727-45dd-89d2-f9cae8cf80bf" />

### Mynotebook

仿写一个windows文本编辑器

<img width="925" height="735" alt="image" src="https://github.com/user-attachments/assets/191516be-4064-43fc-8026-46262763ffc9" />

### MyQPainter

（本部分，熟悉Qpainter组件的小练习）

1，MyRader简单的雷达

<img width="798" height="635" alt="image" src="https://github.com/user-attachments/assets/fb7efca7-961a-48c4-99e3-a5ccc4001cbc" />

2，MySimpleCarRate简单汽车仪表盘

<img width="802" height="632" alt="image" src="https://github.com/user-attachments/assets/fc5ba4d8-fe2a-497e-bc27-5a91190b4240" />



