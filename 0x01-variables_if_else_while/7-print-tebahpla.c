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
	char a;
	char x = 0;

	do
	{
		putchar(a);
		a--;
	}
	while (a <= 'z');

	putchar('\n');
	
	while (x != 10)
	{
		putchar(a);
		a++;
		x++;
	}
	putchar('\n');

	return (0);
}
