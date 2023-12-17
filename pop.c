#include "monty.h"

/**
 * pop_func - prints the top
 * @top: stack head
 * @count: line_number
 * Return: no return
*/

void pop_func(stack_t **top, unsigned int count)
{
	stack_t *t;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	*top = t->next;
	free(t);
}
