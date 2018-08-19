#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"
# include <stdio.h>

typedef	struct  _stack
{
	int 	*s;
	int	top;
}		stack;

void            initialize(stack **new);
int		pop(stack *current);
void		swap(stack *current);
int		peek(stack *current);
void		push(int temp, stack *current);
void		swap(stack *current);
void		dump(stack *current);
void		rot(stack *current);
void		rev_rot(stack *current);
void		free_all(stack **current);

#endif 
