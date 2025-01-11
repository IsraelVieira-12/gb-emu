#include <stdlib.h>
#include <emu.h>
#include <cart.h>
#include <cpu.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

/* 
    Emu Components

    |Cart|
    |CPU|
    |Address Bus|
    |PPU|
    |Timer|
*/

static emu_context_t ctx;

emu_context_t *emu_get_context() {
    return &ctx;
}