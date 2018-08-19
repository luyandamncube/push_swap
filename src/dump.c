#include "push_swap.h"

void	dump(stack *current)
{
	int	k;

	k = 0;
	while (k < current->top)
	{
		ft_putnbr(current->s[k]);
		ft_putstr("\n");;
		k++;
	}
}
