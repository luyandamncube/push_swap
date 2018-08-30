/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/29 15:33:56 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	initialize(&stack_a, 'a');	
	initialize(&stack_b, 'b');	
	if (argc > 1)
	{
		while (argc > 1)
		{
			if (ft_isnum(argv[argc -1]))
				push(ft_atoi(argv[argc - 1]), stack_a);
			else
			{
				ft_putstr("Error\n");
				exit (1);
			}
			argc--;
		}
		if (check_duplicates(stack_a))
			ft_putstr("Error\n");
		else if (!is_sorted(stack_a->s, stack_a->top))
		{
			init_score(stack_a);
			set_bounds(stack_a);
			gen_loops(stack_a);
			printf("stacker %d \n", stack_a->loops[0]);
			printf("stacker %d \n", stack_a->loops[1]);
			printf("stacker %d \n", stack_a->loops[2]);
			printf("stacker %d \n", stack_a->loops[3]);
			printf("stacker %d \n", stack_a->loops[4]);
			printf("stacker %d \n", stack_a->loops[5]);
			printf("stacker %d \n", stack_a->loops[6]);
			printf("stacker %d \n", stack_a->loops[7]);
			printf("stacker %d \n", stack_a->loops[8]);
			printf("stacker %d \n", stack_a->loops[9]);
			printf("stacker %d \n", stack_a->loops[10]);
			printf("stacker %d \n", stack_a->loops[11]);
			dump(stack_a, stack_b);
			printf("sorted %d\n", is_sorted(stack_a->s, stack_a->top));
		}
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
