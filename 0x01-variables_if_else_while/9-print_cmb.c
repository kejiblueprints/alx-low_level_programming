#include <stdio.h>
/**
*main-it prints all possible combinations of single digit numbers
*
*Return: 0 if successfull
*/
int main(void)
{
int a;

for (a = 48; a <= 57; a++)
{
putchar(a);
if (a == 57)
break;
putchar(44);
putchar(32);
	}
putchar('\n');
return (0);
}
