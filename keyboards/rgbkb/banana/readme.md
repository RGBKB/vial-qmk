# banana

![banana](https://github.com/RGBKB/Keyboard-files/blob/main/BANANA/Images/BANANA.jpg)

Banana is a 48-key ergonomic keyboard with appeal.

* Keyboard Maintainer: [David](https://github.com/Legonut)
* Hardware Supported: Rev 4, RP2040
* Hardware Availability: [bananakeyboard.com](https://www.bananakeyboard.com) and [RGBKB.net](https://www.rgbkb.net)

Make example for this keyboard (after setting up your build environment):

    make banana:vial

Flashing example for this keyboard:

    make banana:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (3,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Remove the pack panel, hold the BOOT button and press the RESET button.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
