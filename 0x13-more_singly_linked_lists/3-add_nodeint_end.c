#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new element (node), or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node; /* Create a new node */
listint_t *current; /* Create a pointer to traverse the list */

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

if (new_node == NULL)
return (NULL); /* Allocation failed, return NULL */

new_node->n = n; /* Assign the value 'n' to the new node */
new_node->next = NULL; /* The new node will be the last, so its next is NULL */

if (*head == NULL)
{
*head = new_node; /* If the list is empty, set the head to the new node */
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next; /* Traverse the list until the last node */
}
current->next = new_node; /* Attach the new node to the last node */
}

return (new_node); /* Return the address of the new element */
}
