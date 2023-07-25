#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * print_int - prints integers.
 * @d : integer.
 * Return: d bytes.
 */

int print_int(int n)
{
int len = 0, temp;
char *buffer;
  
if (n == 0)
{
print_char('0');
return (1);
}
else if (n < 0)
{
char m = '-';
write(1, &m, 1);
len++;
n = -n;
}
temp = n;
while (temp > 0)
{
temp /= 10;
len++;
}
buffer = malloc(sizeof(char) * (len + 1));
int i = len - 1;
while (n > 0)
{
buffer[i] = '0' + (n % 10);
n /= 10;
i--;
}
write(1, buffer, len);
return (len);
}
