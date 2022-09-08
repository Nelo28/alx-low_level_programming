#include <unistd.h>

/**
 * main - Print the string in the write function
 *
 * Description: using the main function
 * this program prints "and that piece of art is useful - Dora Korpar, 2015-10-19",
 * followed by a new line, to standard error.
 * Return: Always 1 (Success) 
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
