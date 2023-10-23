#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new element (node), or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node; /* Create a new node */

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

if (new_node == NULL)
return (NULL); /* Allocation failed, return NULL */

new_node->n = n; /* Assign the value 'n' to the new node */
new_node->next = *head; /* Set the 'next' of the new node to the current head*/

*head = new_node; /* Update the head to point to the new node */

return (new_node); /* Return the address of the new element */
}
