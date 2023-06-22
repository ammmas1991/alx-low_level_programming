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
	char a = 1;
	char z = 10;

	while (a < z)
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
