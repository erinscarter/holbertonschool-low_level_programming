#include "lists.h"

/**
* print_listint - function that prints all elements in list_t
* @h: pointer to the head of the list to print
* Return: number of nodes
*/

size_t print_listint_t(const listint_t *h)
{
	const listint_t *temp = h;
	int nodes = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
