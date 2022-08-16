/*
 * File: 3-add_nodeint_end.c
 * Auth: ikeji chiagozie @ alx-school
 */

#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return (*head);
}
