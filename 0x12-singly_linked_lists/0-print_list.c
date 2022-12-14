#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list to print
 * Return: the number of element to print.
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
