#include "push_swap.h"

void	rot(stack *current)
{
	stack	*temp;
	int	store;
	int	k;

	store = pop(current);
	k = current->top;
	initialize(&temp);
	while (k > 0)
	{
		temp->s[temp->top++] = pop(current);
		k--;
	}
	push(store,current);
	
	k = temp->top;
	while (k > 0)
	{
		current->s[current->top++] = pop(temp);
		k--;
	}
}
