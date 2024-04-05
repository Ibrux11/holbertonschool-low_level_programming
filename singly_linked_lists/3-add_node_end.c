#include "lists.h"

/**
* add_node_end - add new node at the end of the list
* @head: Pointer to the head of the linked list.
* @str: char to add at the beggining of the linked list
* Return: The adress of the new element if no problem
*         Null if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new_node, *last_node;

	for (len = 0; str[len] != '\0'; len++)
		;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}
	return (new_node);
}
