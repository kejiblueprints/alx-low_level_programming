#include "main.h"
/**
*print_alphabet- prints the alphabet a-z to the screen
*/
void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
