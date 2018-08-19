#include "push_swap.h"

void	swap(stack *current)
{
	int	temp1;
	int	temp2;

	temp1 = pop(current);
	temp2 = pop(current);

	push(temp1, current);
	push(temp2, current);
}
