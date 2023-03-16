#include "lists.h"
/**
* list_len - returns the number of elements in a linked list
* @h - head of the linked list
* Retun - the number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	int index = 0;
	const list_t *temp = h;

	while (temp)
	{
		index++;
		temp = temp->next;
	}
	return (index);
}
