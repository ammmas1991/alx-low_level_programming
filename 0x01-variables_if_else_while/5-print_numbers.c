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
	int a = 0;
	int z = 10;

	while (a < z)
	{
		printf("%d", a);
		a++;
	}

	printf("\n");

	return (0);
}
