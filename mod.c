#include "monty.h"

/**
 * mod_func - a function to compute the remainder of division
 * @count: line_number
 * @top: stack head
 * Return: return nothing
*/

void mod_func(stack_t **top, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	if (t->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	aux = t->next->n % t->n;
	t->next->n = aux;
	*top = t->next;
	free(t);
}
