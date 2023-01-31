#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print head data
 *
 * Return: number of nodes
 */




size_t print_listint(const listint_t *h)
{
if (h == NULL)
printf("no data to be prited");
struct listint_s *ptr = NULL;
ptr = h;
while (ptr != 0)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
}

}
