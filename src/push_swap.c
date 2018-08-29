/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/29 10:51:36 by lmncube          ###   ########.fr       */
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
			//algo_1(stack_a, stack_b);
			printf("push_to %d\n", push_to(stack_b, stack_a));
			printf("top a %d\n", stack_a->top);
			init_score(stack_a);
			printf("top %d\n", stack_a->s[stack_a->top - 1]);
			printf("bottom %d\n", stack_a->s[0]);
			printf("sorted %d\n", is_sorted(stack_a->s, stack_a->top));
			printf("score %d\n", stack_a->sa_score[0]);
			printf("score %d\n", stack_a->sa_score[1]);
			printf("score %d\n", stack_a->sa_score[2]);
			printf("score %d\n", stack_a->sa_score[3]);
			printf("score %d\n", stack_a->sa_score[4]);
			printf("score %d\n", stack_a->sa_score[5]);
			printf("score %d\n", stack_a->sa_score[6]);
			//printf("quick_select %d\n", quick_select(stack_a->s, 0, stack_a->top -1, 2));
			dump(stack_a, stack_b);
		}
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
