#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * percent - prints percent.
 * Return:  the bytes of %
 */

int percent(void)
{
char percent = '%';
write(1, &percent, 1);

return (1);
}
