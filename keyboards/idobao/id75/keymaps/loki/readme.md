# loki

Loki is a custom keyboard layout for the Idobao ID75 keyboard that provides the
following features:

- Standard keys are two 5x3 (HxV) blocks for the usual locations of the
  alphabetical keys and the standard punctuation, base layer is dvorak.
- The key under the arrow keys activates the numeric keypad, which is on the
  right hand side.
- 4th key left of the bottom right corner switches to QWERTY for the 5x3
  alphabet/symbol keys.
- Second from the bottom on the right switches the alphabet keys to russian with
  most of the keys matching the phonetics of the dvorak layout:

    - q = я
    - j = ж
    - x = ю
    - 1 = ы
    - 2 = №
    - 3 = э
    - 4 = ч
    - 5 = ё
    - 6 = щ
    - 7 = ъ
    - 9 = ь
    - ( and ) are in the place of [ and ] and there is no ? and | only / and \

- Menu key is right in the middle between two space keys, it could be more
  useful there.
- Numeric keypad lock button is momentary, and beside the windows key, and
  numeric keys are right under the right home row. 1234567890. The decimal point
  right at the bottom, and overrides the caps lock key which doesn't get used at
  the same time, or very often.
- Backspace is right under the resting position of the left thumb, which is not
  often used normally, now can get some work.
- Delete is beside it, it is less frequently used but is now close to home
  position of the left hand.
- Switching to cyrillic (you need to set up your system to have standard russian
  layout for this) second from the bottom on the right edge, then the
  second from the right on the bottom edge, to turn it on, and reverse the
  pattern to turn it off.
- The second from the right, bottom edge when pressed from dvorak mode switches
  over to qwerty, but its primary purpose is for gaming, to deal with some
  games, mostly older ones, that can't be adequately reconfigured using dvorak
  because the input controls of these games don't allow punctuation keys, that
  are bottom right on qwerty.

In the near future, southwest european accented letters will be added, which
will depend on another keyboard layout and layer.

To build this layout, from the folder in which you cloned the qmk_firmware
repository, type:

```
qmk compile -kb idobao/id75/v2 -km loki
```
