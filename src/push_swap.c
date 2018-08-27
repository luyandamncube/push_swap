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
	int		k;

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
			init_score(stack_a);
			printf("score 0 %d\n", stack_a->sa_score[0]);
			printf("score 1 %d\n", stack_a->sa_score[1]);
			printf("score 2 %d\n", stack_a->sa_score[2]);
			printf("score 3 %d\n", stack_a->sa_score[3]);
			printf("score 4 %d\n", stack_a->sa_score[4]);
			printf("score 5 %d\n", stack_a->sa_score[5]);
			printf("score 6 %d\n", stack_a->sa_score[6]);
			printf("score 7 %d\n", stack_a->sa_score[7]);
			printf("sorted %d\n", is_sorted(stack_a->s, stack_a->top));
			dump(stack_a, stack_b);
		}
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
