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
		else
		{
			init_score(stack_a);
			set_bounds(stack_a);
			printf("sorted %d\n", is_sorted(stack_a->s, stack_a->top));
			dump(stack_a, stack_b);
		}
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
