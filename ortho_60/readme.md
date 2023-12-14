# ortho_60

![ortho_60](imgur.com image replace me!)

拆机黑轴轴板改低成本分体直列键盘

原版为左 5×6 右 6×6，左右两块用 11P 排线连接。
右侧电路板引出两组 8P 排线，矩阵见 `planck_split.h`。

改制为两块 5×6 轴板组分体 Preonic（60%）。

* Keyboard Maintainer: [居戎氏](https://github.com/lotem)
* Hardware Supported:
  - 收银机黑轴轴板，含 PCB
  - PCB：天亿键盘 KB36+30(SHYT.YS)
  - 主控：RP2040
  
* Hardware Availability: 黑轴轴板海鲜市场有售，8.88 一块

## 线序

PCB 背面一角标注 A 或 B。取 2 块轴板 A，该字样向上放置并观察。

 - A 板左侧排线线序：列线从上到下为 C0 ~ C5、行线从下到上为 R0 ~ R4，通过排线连接到 B 板对应的行线、列线。
 
## 连接方式

左手键盘正向放置，排线在右侧偏上；右手键盘旋转 180 度放置，排线在左侧偏下。
两块键盘的行线、列线通过排线分别连接主控板。
现以面包板示例。

行线：

左右手 5 条行线并联。
合并后用左手的线序统一表记。

    左 R0 R1 R2 R3 R4
    右 R4 R3 R2 R1 R0

列线：

左右手共 12 列。

    左 C0 C1 C2 C3 C4 C5 右 C5 C4 C3 C2 C1 C0

RP2040 主控引脚定义：

 - 左 C0 ~ C5 : GP0 ~ GP5
 - 右 C0 ~ C5 : GP27, GP26, GP15, GP14, GP7, GP6
 - R0 ~ R4 : GP8 ~ GP12

Make example for this keyboard (after setting up vial-qmk build environment):

    make planck_split/ortho_60:vial

Flashing example for this keyboard:

    make planck_split/ortho_60:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
