#include "monty.h"

/**
 * mul_func - multiplies the top two elements of the stack.
 * @top: stack head
 * @count: line_number
 * Return: return nothing
*/

void mul_func(stack_t **top, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	aux = t->next->n *t->n;
	t->next->n = aux;
	*top = t->next;
	free(t);
}
