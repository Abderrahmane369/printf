#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_char - prints characters.
 * @c : character.
 * Return: c bytes.
 */

int print_char(char c)
{
write(1, &c, 1);
return (1);
}
