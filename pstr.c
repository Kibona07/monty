#include "monty.h"

/**
 * pstr_func - prints the string starting at the top of the stack,
 * 
 * @top: stack head
 * @count: line_number
 * Return: return nothing
*/
void pstr_func(stack_t **top, unsigned int count)
{
	stack_t *t;
	(void)count;

	t = *top;
	while (t)
	{
		if (t->n > 127 || t->n <= 0)
		{
			break;
		}
		printf("%c", t->n);
		t = t->next;
	}
	printf("\n");
}
