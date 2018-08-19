#include "push_swap.h"

void    rev_rot(stack *current)
{
	stack   *temp;
	int     store;
	int     k;

	k = current->top;
	initialize(&temp);
	while (k > 1)
	{
		temp->s[temp->top++] = pop(current);
		k--;
	}
	store = pop(current);
	k = temp->top;
	while (k > 0)
	{
		current->s[current->top++] = pop(temp);
		k--;
	}
	push(store,current);
}

