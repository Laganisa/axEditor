#include "editor.h"

#define STDOUT_FD 1

static size_t str_len(const char *s)
{
    size_t len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return len;
}

static void editor_write(const char *text)
{
    axlib_write(STDOUT_FD, text, str_len(text));
}

int editor_main(void)
{
    editor_write("axEditor started.\n");
    editor_write("editor module split from axShell.\n");
    return 0;
}
