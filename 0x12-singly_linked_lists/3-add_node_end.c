#include "lists.h"

/**
 * add_node_end - adds node to the end of the list
 * @head: head of the node
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelements, *tmp;
	unsigned int i, count = 0;

	newelements = malloc(sizeof(list_t));
	if (newelements == NULL)
		return (NULL);
	newelements->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newelements->len = count;
	newelements->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newelements;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newelements;
	}
	return (*head);
}
