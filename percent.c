#include <main.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * percent - prints percent.
 *
 */
void percent(void)
{
char per;
per = '%';
write(1, &per, 1);
}
