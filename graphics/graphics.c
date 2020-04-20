#include "graphics.h"

void set_video_mode(u8 mode)
{
    __asm__(
        "int $0x10" : : "a" ((0x00 << 8) | mode)                        
    );
}

void clear_screen()
{
    set_video_mode(0);
}

void set_cursor_pos(u8 x, u8 y)
{
    __asm__(
        "int $0x10" : : "a" (0x02 << 8),
                        "d" ((y << 8) | x)
    );
}

void set_bg_color(u8 color)
{
    __asm__(
        "int $0x10" : : "a" (0x0b << 8),
                        "b" (color)
    );
}

void write_char(u8 character, u8 color)
{
    __asm__(
        "int $0x10" : : "a" ((0x0e << 8) | character),
                        "b" (color)
    );
}

