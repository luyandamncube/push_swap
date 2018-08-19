#include "push_swap.h"

void		initialize(stack **new)
{
	*new = (stack*)malloc(sizeof(stack));
	(*new)->top = (int)malloc(sizeof(int));
	(*new)->top = 0;
	(*new)->s = malloc(4096);
}
