#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * print_string - prints strings.
 * @s : string.
 */
void print_string(char *s)
{
if (s)
write(1, &s, strlen(s));
else
write(1, "(null)", 6);
}
