#include "lists.h"
/**
* get_nodeint_at_index - returns the data of the nth node of a list
* @head: pointer to the head of a list
* @index: element to locate
* Return: data of the nth node of a list or NULL on failure
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
