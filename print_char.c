#include <main.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_char - prints characters.
 * @c : character.
 */
void print_char(char c)
{
write(1, &c, 1);
}
