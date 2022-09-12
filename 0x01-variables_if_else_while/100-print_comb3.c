#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;
int p;
for (d = 0; d <= 99; d++)
{
	putchar((d / 10) + '0');
	putchar((p % 10) + '0');
	if (d != 89)
	{
		putchar(d);
		putchar(p);
		if (d == '8' && p == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
