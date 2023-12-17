#include "monty.h"
/**
 * pall_func - prints the stack
 * @count: has not used
 * @top: stack top
 * Return: no return
*/

void pall_func(stack_t **top, unsigned int count)
{
	stack_t *t;
	(void)count;

	t = *top;
	if (t == NULL)
		return;

	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
