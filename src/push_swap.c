/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/27 15:02:17 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;
	int		k;

	size = argc - 1;
	k = 1;
	initialize(&stack_a, 'a');	
	initialize(&stack_b, 'b');	
	if (argc > 1)
	{
		while (argc > 1)
		{
			if (ft_isnum(argv[k]))
				push(ft_atoi(argv[k]), stack_a);
			else
			{
				ft_putstr("Error\n");
				exit (1);
			}
			k++;
			argc--;
		}
		if (check_duplicates(stack_a))
			ft_putstr("Error\n");
		else
		{
			//algo_1(stack_a, stack_b);
			printf("rot a %d\n", rot(stack_a));
			printf("elem 1 %d\n", stack_a->s[0]);
			printf("sorted %d\n", is_sorted(stack_a->s, stack_a->top));
			dump(stack_a, stack_b);
		}
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
