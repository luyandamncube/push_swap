#include "push_swap.h"

int	pop(stack *current)
{
	int	temp;
	
	temp = current->s[current->top -1];
	current->top--;
	return (temp);
}
