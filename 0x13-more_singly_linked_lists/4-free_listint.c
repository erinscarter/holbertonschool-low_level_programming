#include "lists.h"
/**
* free_listint - Entry Point
* @head: head
* Return: 0
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

		free(head);
}
