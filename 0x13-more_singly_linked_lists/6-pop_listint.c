#include "lists.h"
/**
* pop_listint - Entry Point
* @head: head
* Return: 0
*/
int pop_listint(listint_t **head)
{
	int n = 0;

	listint_t *new_head;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
