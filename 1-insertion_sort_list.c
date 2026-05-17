#include "sort.h"


/**
 * insertion_sort_list - sorts db linked list
 * @list: pointer to pointer to list struct
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p, *tmp;
	int i = 0, j = 0;
	if (list == NULL || (*list)->next == NULL)
		return;
	

	p = *list;
	while (p->next)
	{
		
		if (p->n > p->next->n)
		{
			tmp = p;
			while (p->n > p->next->n)
			{ 				
				p->next->prev = p->prev;
				if (p->prev)
				{
					p->prev->next = p->next;
				}
				
				p->prev= p->next;
				
				p->next = p->next->next;
				
				p->prev->next = p;
				
				if (p->next)
					p->next->prev = p;

				if (p->prev->prev)
				{
					p = p->prev->prev;
				}
				else if (p->prev){
					p = p->prev;
					*list = p;
				}
				
				print_list(*list);
				i++;
			}
			p = tmp;
		}
		else {
			p = p->next;
		}
		j++;
	}	
}
