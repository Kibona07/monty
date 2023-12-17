#include "monty.h"

/**
 * add_func - a fuction to add elements on top of the stack.
 * @top: stack head
 * @count: line_number
 * Return: no return
*/

void add_func(stack_t **top, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	aux = t->n + t->next->n;
	t->next->n = aux;
	*top = t->next;
	free(t);
}
