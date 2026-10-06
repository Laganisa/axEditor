#ifndef AXSHELL_EDITOR_H
#define AXSHELL_EDITOR_H

#include "kernel.h"

#define STDOUT_FD 1

static size_t str_len(const int8_t *s)
{
    size_t len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return len;
}

static void editor_write(const int8_t *text)
{
    axlib_write(STDOUT_FD, text, str_len(text));
}

int32_t editor_main(void);

#endif
