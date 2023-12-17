#include "monty.h"

/**
 * pchar_func - prints the char at the top of the stack,
 * 
 * @top: stack head
 * @count: line_number
 * Return: return nothing
*/
void pchar_func(stack_t **top, unsigned int count)
{
	stack_t *t;

	t = *top;
	if (!t)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (t->n > 127 || t->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", t->n);
}
