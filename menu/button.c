#include "button.h"
#include "../graphics/graphics.h"


void button_init(struct Button * button, char * text, int x, int y, void (*handler)()) {
    button->text = text;
    button->x_pos = x;
    button->y_pos = y;
    button->handler = handler;
    button->is_selected = 0;
    button->color = 15;
    button->selected_color = 1;
}

void button_set_x_pos(struct Button * button, int x) {
    button->x_pos = x;
}

void button_set_y_pos(struct Button * button, int y) {
    button->y_pos = y;
}

void button_set_pos(struct Button * button, int x, int y) {
    button->x_pos = x;
    button->y_pos = y;
}

void button_set_selected(struct Button * button, int is_selected) {
    button->is_selected = is_selected;
}

void button_set_handler(struct Button * button, void (*handler)()) {
    button->handler = handler;
}

void set_color(struct Button * button, int color)
{
    button->color = color;
}

void set_selected_color(struct Button * button, int color)
{
    button->selected_color = color;
}

void show_button(struct Button * button)
{
    char * button_title = button->text;
    int cursor_offset = 0;

    while(*button_title != '\0')
    {
        set_cursor_pos(button->x_pos + cursor_offset, button->y_pos);
        write_char(*button_title, button->color);
        cursor_offset++;
        *button_title++;

    }    


}
