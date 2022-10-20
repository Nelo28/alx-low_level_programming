#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * main - check the code
 * @head: head of the linked list.
 * Return: no return
 */
int main(void free_list)
{
	list_t *head;
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
