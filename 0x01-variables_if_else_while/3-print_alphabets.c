#include <stdio.h>

/**
 * main - Print if number is positive, negative or zero
 *
 * Return 0 (Success)
 */
int main(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
{
	putchar(low);
}
for (low = 'A'; low <= 'Z'; low++)
{
	putchar(low);
}
putchar('\n');

return (0);
}
