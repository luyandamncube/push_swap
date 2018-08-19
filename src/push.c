#include "push_swap.h"

void	push(int temp, stack *current)
{
	current->s[current->top++] = temp;
}
