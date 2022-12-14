#include "monty.h"

/**
 * _push - pushes an element to the stack.
 * @doubly: head of the linked list
 * @cline: line number
 * Return: nothing
 */
void _push(stack_t **doubly, unsigned int cline)
{
	int n, j;

	if (!vg.arg)
	{
		fprintf(stderr, "L%u: ", cline);
		fprintf(stderr, "usage: push integer\n");
		free_vg();
		exit(EXIT_FAILURE);
	}

	for (j = 0; vg.arg[j] != '\0'; j++)
	{
		if (!isdigit(vg.arg[j]) && vg.arg[j] != '-')
		{
			fprintf(stderr, "L%u: ", cline);
			fprintf(stderr, "usage: push integer\n");
			free_vg();
			exit(EXIT_FAILURE);
		}
	}

	n = atoi(vg.arg);

	if (vg.lifo == 1)
		add_dnodeint(doubly, n);
	else
		add_dnodeint_end(doubly, n);
}

/**
 * _pall - prints all values on the stack
 * @doubly: head of the linked list
 * @cline: line numbers
 * Return: nothing
 */
void _pall(stack_t **doubly, unsigned int cline)
{
	stack_t *aux;
	(void)cline;

	aux = *doubly;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
