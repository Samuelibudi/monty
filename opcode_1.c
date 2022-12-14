#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @doubly: head of the linked list
 * @cline: line number
 * Return: nothing
 */
void _add(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", cline);
		free_vg();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * _nop - doesn't do anything
 * @doubly: head of the linked list
 * @cline: line number
 * Return: nothing
 */
void _nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

void _sub(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", cline);
		free_vg();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * _div - divides the second element by the top of the stack
 * @doubly: head of the linked list
 * @cline: line numbers
 * Return: nothing
 */
void _div(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", cline);
		free_vg();
		exit(EXIT_FAILURE);
	}

	if ((*doubly)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", cline);
		free_vg();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n /= (*doubly)->n;
	_pop(doubly, cline);
}
