#include "lists.h"
#include "stdlib.h"

/**
 * add_node - add node at the beginning
 * @head: head of node
 * @str: string to store
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newelements;
	unsigned int x, count = 0;

	newelements = malloc(sizeof(list_t));
	if (newelements == NULL)
		return (NULL);
	newelements->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	newelements->len = count;
	newelements->next = *head;
	*head = newelements;

	return (*head);
}
