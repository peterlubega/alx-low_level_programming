#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int data = 0; /* Initialize data to 0 */

if (head != NULL && *head != NULL)
{
temp = *head; /* Store the current head node */
data = temp->n; /* Get the data from the current head node */
*head = (*head)->next; /* Update the head to point to the next node */
free(temp); /* Free the old head node */
}

return (data); /* Return the data of the deleted head node */
}
