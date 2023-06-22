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

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
	}
	putchar('\n');

	return (0);
}
