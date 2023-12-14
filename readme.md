# planck_split

![planck_split](imgur.com image replace me!)

拆机黑轴轴板改低成本分体直列键盘

原版为左 5×6 右 6×6，左右两块用 11P 排线连接。
右侧电路板引出两组 8P 排线，矩阵见 `planck_split.h`。

可改制为

  - 两块 5×6 轴板组 [分体 Preonic](ortho_60/readme.md)；
  - 两块 6×6 轴板组包含 F 区的 [75% 大直列](ortho_75/readme.md)。

* Keyboard Maintainer: [居戎氏](https://github.com/lotem)
* Hardware Supported:
  - 收银机黑轴轴板，含 PCB
  - PCB：天亿键盘 KB36+30(SHYT.YS)
  - 主控：RP2040
  
* Hardware Availability: 两种规格的黑轴轴板海鲜市场有售，8.88/9.99 一块

## 线序

PCB 背面一角标注 A 或 B，该字样向上放置并观察。

 - A 板左侧排线线序：列线从上到下为 C0 ~ C5、行线从下到上为 R0 ~ R4，通过排线连接到 B 板对应的行线、列线。
 - B 板底部两组排线线序：左边一组为列线，左起依次为 C0 ~ C7；右边一组为行线，右起依次为 R0 ~ R7。

RP2040 主控引脚定义：

 - C0 ~ C7 : GP0 ~ GP7
 - R0 ~ R7 : GP8 ~ GP15

Make example for this keyboard (after setting up vial-qmk build environment):

    make planck_split:vial

Flashing example for this keyboard:

    make planck_split:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
