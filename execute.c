#include "monty.h"

/**
* execute - executes the opcode
* @top: head linked list
* @count: line_counter
* @file: a pointer to monty file
* @content: line content
* Return: no return
*/

int execute(char *content, stack_t **top, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", push_func}, {"pall", pall_func}, {"pint", pint_func},
				{"pop", pop_func},
				{"swap", swap_func},
				{"add", add_func},
				{"nop", nop_func},
				{"sub", sub_func},
				{"div", div_func},
				{"mul", mul_func},
				{"mod", mod_func},
				{"pchar", pchar_func},
				{"pstr", pstr_func},
				{"rotl", rotl_func},
				{"rotr", rotr_func},
				{"queue", queue_func},
				{"stack", stack_func},
				{NULL, NULL}
				};

	unsigned int k = 0;
	char *opp;

	opp = strtok(content, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[k].opcode && opp)
	{
		if (strcmp(opp, opst[k].opcode) == 0)
		{	opst[k].f(top, count);
			return (0);
		}
		k++;
	}
	if (opp && opst[k].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, opp);
		fclose(file);
		free(content);
		free_stack(*top);
		exit(EXIT_FAILURE); }
	return (1);
}
