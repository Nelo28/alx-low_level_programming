#include <stdio.h>

/**
 * main - Print if number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');

return (0);
}
