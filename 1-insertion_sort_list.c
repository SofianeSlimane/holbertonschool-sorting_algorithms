#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr;
	

	ptr = *list;
	while (ptr->next != NULL)
	{
		
		if (ptr->n > ptr->next->n)
		{
			ptr->next->prev = ptr->prev;
			ptr->prev->next = ptr->next;
			ptr->prev = ptr->next;
			ptr->next = ptr->next->next;
			ptr->next->prev = ptr;
			print_list(*list);
		}
		else
		{
			ptr = ptr->next;
		}
	}
}	
