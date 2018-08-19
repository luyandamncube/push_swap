#include "push_swap.h"

int	peek(stack *current)
{
	return (current->s[current->top - 1]);
}
