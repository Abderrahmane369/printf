#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * print_string - prints strings.
 * @s : string.
 * Return: s bytes.
 */

int print_string(char *s)
{
if (s)
{
int len = _strlen(s);
write(1, s, len);
return (len);
}
else
{
write(1, "(null)", 6);
return (6);
}
}
