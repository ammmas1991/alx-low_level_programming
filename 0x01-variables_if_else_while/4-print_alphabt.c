#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: Always 0.
*/
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		if (a == 'e')
		{
			a++;
		}
		else if (a == 'q')
		{
			a++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');

	return (0);
}
