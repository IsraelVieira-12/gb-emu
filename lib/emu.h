#pragma once

#include <common.h>

typedef struct {
    bool paused;
    bool running;
    u64 ticks;
} emu_context_t;

int emu_run(int argc, char *argv[]);

emu_context_t *emu_get_context();