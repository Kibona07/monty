#include "monty.h"

/**
* free_stack - a function to free a doubly linked list
* @top: head of the stack
*/

void free_stack(stack_t *top)
{
	stack_t *aux;

	aux = top;
	while (top)
	{
		aux = top->next;
		free(top);
		top = aux;
	}
}
