/*
 * File: 1-listint_len.c
 * Auth: ikeji chiagozie @ alx-school
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
    size_t n = 0;

    while (h)
    {
        n++;
        h = h ->next;
    }
    
    return n;
}