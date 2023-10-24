#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all data values (n) in the list,
 * or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
int sum = 0; /* Initialize the sum to 0 */

while (head != NULL)
{
sum += head->n; /* Add the data value of the current node to the sum */
head = head->next; /* Move to the next node */
}

return (sum); /* Return the sum of all data values in the list */
}
