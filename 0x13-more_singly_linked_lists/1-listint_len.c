#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements (nodes) in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t num_elements = 0; /* Initialize a variable to count elements */

while (h != NULL)
{
num_elements++; /* Increment the element count */
h = h->next; /* Move to the next node */
}

return (num_elements);
}
