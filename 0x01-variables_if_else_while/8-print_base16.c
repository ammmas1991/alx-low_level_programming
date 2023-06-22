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
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
	}

	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
