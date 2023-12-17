#include "monty.h"

/**
  *rotl_func - rotates the stack to the top
  *@top: stack head
  *@count: line_number
  *Return: return nothing
 */

void rotl_func(stack_t **top,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *top, *aux;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	aux = (*top)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = aux;
}
