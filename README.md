## MyQtProject

Practice projects

这部分是本人对Qt开发进行学习的项目记录，具体项目和实现功能在下部分，如果您想使用可以下载安装Qt开发软件，下载项目文件在Qt中打开.pro文件即可。

### FoodShop

该部分是我的本科毕设，您需要事先下载phpstudy,navicat,phpstrom 然后：

1. 打开PHP study
2. foodshop.sql在数据库中执行
3. 把我的foodshop文件放在phpstudy目录下的www文件下：
4. 前台入口地址：账号hsy 密码：123 地址：**http://localhost/foodshop/public/fshopwb/index/index**
5. 后台入口地址：账号：user 密码：1 地址：http://localhost/foodshop/public/admin/login/index

1、三大模块构建。用户模块：实现注册登录、个人信息完善、权限控制；订餐模块：支持购物车、订单生成、历史订单查询，会员结算，集成地图定位功能；后台管理：支持餐品信息、用户信息、广告与订单管理，并提供推荐和折扣管理功能服务器端支持多客户端接入、消息广播与单发

2、独立完成数据库表设计（餐品、用户、订单、会员信息等），实现数据的有效存储与查询优化用户交互体验，实现不同颜色区分消息来源

3、项目最终实现完整的“用户下单—后台处理—订单管理”流程，提升了用户体验与商家管理效率
<img width="2176" height="1309" alt="image" src="https://github.com/user-attachments/assets/d237f47c-f9e4-48f4-9158-abb722b6928a" />

<img width="2280" height="1282" alt="image" src="https://github.com/user-attachments/assets/79b39f86-0948-4227-bcf6-003a8ad0adf2" />


<img width="2537" height="1355" alt="image" src="https://github.com/user-attachments/assets/60988212-5299-41f0-a5b3-ceb686959f2f" />
=======


### MyAssistant:

本项目在本地进行测试实验，您需要事先准备USB转TTL的单片机（网上购买即可）。

本项目实现了一款可视化的串口通信调试工具，用于测试与调试嵌入式设备或串口模块通信。用户可通过界面完成串口参数配置、数据发送与接收、自动循环发送、HEX 编码显示与文件保存等功能。

一：串口通信模块：

- 使用 QSerialPort 实现串口的打开、关闭、数据收发。
- 支持波特率、数据位、校验位、停止位、流控方式等多参数配置。
- 实现实时串口设备刷新与占用检测，防止端口冲突。

二:数据处理模块：

- 支持 ASCII / HEX 编码收发模式切换。
- 实现自动发送、循环发送、带时间戳发送等高级功能。
- 使用 QTimer 定时触发周期发送任务；

三：文件与UI功能：

- 支持自定义指令模板的保存与加载（TXT 格式），可一键调用。
- 实现多组命令按钮绑定（可配置文本与HEX选项）。
- 支持历史记录保存与查看，界面可隐藏/展开以优化操作体验。
- 使用 QDateTime 实现系统时间动态显示。

![image](https://private-user-images.githubusercontent.com/239273274/503537981-ace03631-b388-4891-b129-44a11a6d66c3.png?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NjEwNDUyMjYsIm5iZiI6MTc2MTA0NDkyNiwicGF0aCI6Ii8yMzkyNzMyNzQvNTAzNTM3OTgxLWFjZTAzNjMxLWIzODgtNDg5MS1iMTI5LTQ0YTExYTZkNjZjMy5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjUxMDIxJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI1MTAyMVQxMTA4NDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1hZjZhMmEwNzlhN2FkMDRjNjIyNWE0OWZmNzBiODc5YjA1ZDQwZjkzODFlNGMxZWVkMzMzYTI0NTA0NmQ5OTU4JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.kiGNzzC6P32xEQZMkK_5MB_ScO57D98L6_0DnL8h6Wg)

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

![image](https://private-user-images.githubusercontent.com/239273274/503545365-191516be-4064-43fc-8026-46262763ffc9.png?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NjEwNDUyMjYsIm5iZiI6MTc2MTA0NDkyNiwicGF0aCI6Ii8yMzkyNzMyNzQvNTAzNTQ1MzY1LTE5MTUxNmJlLTQwNjQtNDNmYy04MDI2LTQ2MjYyNzYzZmZjOS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjUxMDIxJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI1MTAyMVQxMTA4NDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT01MDVlMjliZWFlMWZkN2VlMjQ2ZTY3OTVjMzVhNDQ1NjkyYzYyNjc0ZWI1NmI3Y2Q5MGEwMTQyOTRiNzZjNDg4JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.wJA11jm73vjWBxMCBAaO83VnkBcxYFpz8vFPuIDuw5Y)

### MyQPainter

（本部分，熟悉Qpainter组件的小练习）

1，MyRader简单的雷达

![image](https://private-user-images.githubusercontent.com/239273274/503546638-fb7efca7-961a-48c4-99e3-a5ccc4001cbc.png?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NjEwNDUyMjYsIm5iZiI6MTc2MTA0NDkyNiwicGF0aCI6Ii8yMzkyNzMyNzQvNTAzNTQ2NjM4LWZiN2VmY2E3LTk2MWEtNDhjNC05OWUzLWE1Y2NjNDAwMWNiYy5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjUxMDIxJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI1MTAyMVQxMTA4NDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT00Mzk3MTk5YWQ1ZmMyZmVkMzY2NzU4NzY0ZDgxMzBiNjEyOTE1MjM0YzFiNWE4MjQwMjVkY2I1YTM3MmQ3ODRjJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.--2or2XVBa5abVYp5B-qI9jJCUQaicFnh7N541579YY)

2，MySimpleCarRate简单汽车仪表盘

![image](https://private-user-images.githubusercontent.com/239273274/503547058-fc5ba4d8-fe2a-497e-bc27-5a91190b4240.png?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NjEwNDUyMjYsIm5iZiI6MTc2MTA0NDkyNiwicGF0aCI6Ii8yMzkyNzMyNzQvNTAzNTQ3MDU4LWZjNWJhNGQ4LWZlMmEtNDk3ZS1iYzI3LTVhOTExOTBiNDI0MC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjUxMDIxJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI1MTAyMVQxMTA4NDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0yZmZmNzgyNTkwN2E0NTAxZWVmMGY5YTFmNjRkYWVhMTRmN2ZiMWM0Zjg1N2UxMjUyODhkZDMxNzk5Yjc2YTI2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.GYzO-bc9POZPxQ9-dlhXizCo-XMWc8PvTs2vh7caGd8)
=======
### MyWeather

<img width="433" height="846" alt="image" src="https://github.com/user-attachments/assets/7fa808f1-0e1f-4c98-a940-a7e0b4e30b95" />

🌟 主要功能

1. **界面设计**

- 无边框窗口（`Qt::FramelessWindowHint`），可拖拽移动。
- 右键菜单支持退出应用。
- 显示未来 7 天（实际展示前 6 天）的天气信息，包括：日期、天气状况、温度范围、风力风向、湿度、气压等。当前城市天气概况（温度、天气图标、风力等）。
- 包含两个自定义绘图区域（`widget_hightemp`和 `widget_lowtemp`），用于绘制最高/最低温度变化折线图。

------

2. **天气数据获取**

- 通过 **和风天气 API（QWeather）** 获取实时及未来天气数据。
- 默认城市为“焦作”，也可通过输入框自定义城市。
- 城市名称通过本地 JSON 文件（`:city_pinyin.json`）转换为城市编码，再请求对应天气数据。
- 使用 `QNetworkAccessManager`异步请求网络数据，解析返回的 **JSON 格式天气信息**。

------

3. **数据解析与显示**

- 解析返回的 JSON 数据，提取如下信息并显示到 UI 控件：日期（`fxDate`）、天气描述（`textDay`）、最高/最低温（`tempMax`/ `tempMin`）、风力、风向、湿度、气压、月落时间等。根据天气状况（如“晴”、“雨”、“雪”等），通过预定义的 `QPixmap`图标映射（`iconurl`），显示对应的天气图标。
- 将未来几天的最高/最低温度分别存储在 `hightemp`和 `lowtemp`列表中，用于后续绘图。

------

4. **交互功能**

- 支持通过鼠标左键拖动窗口。
- 鼠标右键弹出退出菜单。
- 输入框回车或点击按钮均可触发查询天气。
- 自定义控件绘图事件（`eventFilter`），在指定 widget 上绘制最高/最低温度的折线图：以平均温度为基准，将每日温度以散点 + 连线的形式可视化。温度点用黄色圆点表示，并标注具体温度值。

------

5. **绘图功能（自定义绘图）**

- `drawHighTempLine()`：绘制最高温度折线图。
- `drawLowTempLine()`：绘制最低温度折线图。
- 使用 `QPainter`在自定义 widget 上绘制：温度点（椭圆）连接线温度数值文本标注

### Qt_simpleWord
<img width="883" height="657" alt="image" src="https://github.com/user-attachments/assets/4da3c012-1c94-4db5-8339-3fc6e926eb1c" />

这个程序是一个带工具栏、状态栏和文件操作的文字编辑器。
支持：

- 打开、保存、新建文本文件
- 修改字体、字号、加粗、斜体、下划线
- 通过工具栏和快捷键调整文字格式
- 显示当前文件名、字体大小进度条、光标所在行列位置

### Qt_TreeWidget
<img width="917" height="713" alt="image" src="https://github.com/user-attachments/assets/67333435-fc3b-4f62-b5cb-e6fb68d67b94" />

这是一个使用 **QMainWindow + QTreeWidget + QLabel + QDockWidget** 构建的
**图片管理与浏览工具**。

主要功能包括：

- 📂 建立图片目录树（分组显示文件夹与图片）
- 🖼️ 加载、显示和缩放图片
- ➕ 添加图片或文件夹到树结构
- ❌ 删除图片节点
- 🔍 控制图片显示比例（原始尺寸、适应宽/高、放大、缩小）
- 🪟 控制停靠窗口（显示/隐藏、浮动/嵌入）

### Qt_tableWidget
<img width="901" height="588" alt="image" src="https://github.com/user-attachments/assets/13d0d671-95f6-420a-b718-291aa71f16d5" />

这是一个图形化的 **学生信息表管理工具**，支持：

- 设置表头（列标题）
- 生成指定数量的学生信息（随机分数、姓名、性别等）
- 插入 / 删除 / 添加表格行
- 自动调整行列宽高
- 控制表格编辑、行列头显示、隔行变色
- 从表格中读取数据并在文本框中输出汇总信息
- 控制选择模式（单元格选择 / 整行选择）

### Qt_QstringListModel
<img width="612" height="584" alt="image" src="https://github.com/user-attachments/assets/fcf6dfc2-ec28-46b9-9ed9-2d923dac6daa" />

这是一个简易的 **列表管理工具**，主要功能包括：

- 显示城市名称列表
- 支持编辑（可开启/关闭）
- 添加、插入、删除列表项
- 向上/向下移动选中项
- 升序/降序排序
- 显示当前项的信息（行列号 + 内容）
- 将所有列表项输出到文本框中查看

### Qt_QtableView
<img width="1064" height="724" alt="image" src="https://github.com/user-attachments/assets/7340b50f-8ac2-4a7e-a169-9a02c6cae9f2" />

这个程序的主要功能是：

> 📄 从文本文件读取数据 → 按表格形式显示 → 支持编辑、插入、删除、对齐、加粗等操作 → 可重新输出表格内容。

具体功能包括：

- 打开 `.txt` 数据文件并解析为表格显示
- 状态栏显示当前文件名、当前单元格位置与内容
- 在表格中插入、追加、删除行
- 控制单元格文本对齐（左/右/居中）
- 设置单元格字体是否加粗
- 重新读取（导出）表格数据到文本框显示
