#include <stdio.h>
/**
 * main -finds and prints out first 98
 * fibonacci suit numbers
 * Return: return 0
 */
int main(void)
{
int inc;
unsigned long n1 = 1, n2 = 2, n3;
for (inc = 0; inc < 98; inc++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;
if (inc == 97)
printf("\n");
else
printf(", ");

}

return (0);
}