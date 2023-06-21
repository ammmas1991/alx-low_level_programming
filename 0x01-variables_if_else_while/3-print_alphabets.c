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
	char A = 'A';
	char Z = 'Z';


	while (a <= z)
	{
		
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
