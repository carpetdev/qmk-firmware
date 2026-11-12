#include "../default/keymap.c"

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) >= 6) {
        rgb_matrix_set_color(0, RGB_MAGENTA);
    }
    return false;
}