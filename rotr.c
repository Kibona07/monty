#include "monty.h"

/**
  *rotr_func - rotates the stack to the bottom
  *@top: stack head
  *@count: line_number
  *Return: return nothing
 */

void rotr_func(stack_t **top, __attribute__((unused)) unsigned int count)
{
	stack_t *copy;

	copy = *top;
	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *top;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*top)->prev = copy;
	(*top) = copy;
}
