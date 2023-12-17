#include "monty.h"

/**
 * swap_func - a function to add two elements at top.
 * @top: stack head
 * @count: line_number
 * Return: no return
*/

void swap_func(stack_t **top, unsigned int count)
{
	stack_t *t;
	int len = 0, aux;

	t = *top;
	while (t)
	{
		t = t->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	aux = t->n;
	t->n = t->next->n;
	t->next->n = aux;
}
