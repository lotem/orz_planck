# 囧氏普朗克

![orz_planck](imgur.com image replace me!)

囧氏普朗克：拆机黑轴轴板改低成本直列分体键盘

原版为左 5×6 右 6×6 两块轴板，用 11P 排线连接。
右侧电路板引出两组 8P 排线，矩阵见 [图表](orz_planck_matrix.pdf)。

可改制为

  - 复活 [原版](orz/readme.md) 分体键盘；
  - 两块 5×6 轴板组分体 Preonic——[囧 60](orz_60/readme.md)；
  - 两块 6×6 轴板组包含 F 区的大直列——[囧 75](orz_75/readme.md)。

* Keyboard Maintainer: [居戎氏](https://github.com/lotem)
* Hardware Supported:
  - 收银机黑轴轴板，含 PCB
  - PCB：天亿键盘 KB36+30(SHYT.YS)
  - 主控：RP2040
  
* Hardware Availability: 两种规格的黑轴轴板海鲜市场有售，8.88/9.99 一块

## 线序

左手一侧的 PCB 一角标注为 A，右手一侧 PCB 标注为 B。

A 板拆除原装排线后，从定位板一面观察。
排线座位置自下而上标注了行线 `1 2 3 4 5`、列线 `C D E F G H`。

B 板拆除原装排线后，从定位板一面观察。
排线座位置由左至右标注了两组 8 Pin 排线，分别为
行线 `1 2 3 4 5 6 7 8`、列线 `A B C D E F G H`。

A、B 板对应的行线、列线通过侧方的 11 P 排线连接。
