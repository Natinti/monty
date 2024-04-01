#include "monty.h"

/**
 * _queue - this sets the format of the data to a queue(FIFO)
 *
 * @doubly: this is the head of the list in the program
 * @cline: this the line number in the program
 * Return: no return
 */
void _queue(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 0;
}

/**
 * _stack - this function sets the format for the data to a stack(LIFO)
 *
 * @doubly: this the head of the linked list
 * @cline: this the line number
 * Return: no return
 */
void _stack(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 1;
}

/**
 * _add - this function adds the top two elements of the stack
 *
 * @doubly: this is the head of the linked list
 * @cline: this the line number
 * Return: no return
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
		dprintf(2, "L%u: can't add, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * _nop - this function does nothing
 *
 * @doubly: this is the head of the linked list
 * @cline: this is the line number
 * Return: no return
 */
void _nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

/**
 * _sub - this substracts to the top elements to the
 * second top element of the stack in the program
 *
 * @doubly: this is the head of the linked list
 * @cline: this is the line number;
 * Return: no return
 */
void _sub(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop(doubly, cline);
}

