#include "monty.h"

/**
 * pint_func - prints the top
 * @top: stack head
 * @count: line_number
 * Return: no return
*/

void pint_func(stack_t **top, unsigned int count)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
		printf("%d\n", (*top)->n);
}
