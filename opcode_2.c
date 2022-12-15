#include "monty.h"

/**
 * _mul - multiplies the top element to the second top element
 * @doubly: head of the linked list
 * @cline: line_number
 * Return: nothing
 */
void _mul(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", cline);
		free_vg();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n *= (*doubly)->n;
	_pop(doubly, cline);
}
