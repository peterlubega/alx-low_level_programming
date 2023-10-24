#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
listint_t *current; /* Create a pointer to traverse the list */

if (head == NULL)
return; /* If head is already NULL or invalid, nothing to free */

while (*head != NULL)
{
current = *head; /* Store the current node */
*head = (*head)->next; /* Move to the next node */
free(current); /* Free the current node */
}
}
