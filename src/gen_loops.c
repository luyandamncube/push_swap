#include "push_swap.h"

void	gen_loops(t_stack *current)
{
	int count;
	int len;
	int temp[4096];

	count = 1;
	len = current->top;
	current->loops = current->s;
	bubble_sort(current->loops, current->top);
	while (count < len)
	{
		rot_silent(current->s, current->top);
		ft_memcpy(temp,current->loops, 500);
		//current->loops + 4 = temp;
		count++;
	}
	printf("temp %d\n", temp[0]);
	printf("temp %d\n", temp[1]);
	printf("temp %d\n", temp[2]);
	printf("temp %d\n", temp[3]);
	printf("temp %d\n", temp[4]);
}
