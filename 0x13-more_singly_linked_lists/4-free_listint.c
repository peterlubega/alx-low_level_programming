#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 */

void free_listint(listint_t *head)
{
listint_t *current; /* Create a pointer to traverse the list */

while (head != NULL)
{
current = head; /* Store the current node */
head = head->next; /* Move to the next node */
free(current); /* Free the current node */
}
}
