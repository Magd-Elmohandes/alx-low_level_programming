#include "main.h"

/**
 *print_alphabet_x10 - print lowercase alphabet ten times
 *followed by a new line
 */

void print_alphabet_x10(void)
{
char i;
int counter;

for (counter = 0; counter < 10; counter++)
{
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
}
