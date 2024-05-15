#include "planetary-mode.h"

void astronomy_mode() {
    uint8_t red_mode = (2 << 4) | 1;
    rgb_led_update(red_mode, 0);
}
