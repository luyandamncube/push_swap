/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/03 14:01:15 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        initialize(t_stack **a, t_stack **b)
{
	*a = malloc(sizeof(t_stack));
	*b = malloc(sizeof(t_stack));
	(*a)->name = 'a';
	(*b)->name = 'b';
	(*a)->top = 0;
	(*b)->top = 0;
	(*a)->s = malloc(500);
	(*b)->s = malloc(500);
	(*a)->sa_score = malloc(500);
	(*b)->sa_score = malloc(500);
	(*a)->pb_score = malloc(500);
	(*b)->pb_score = malloc(500);
	(*a)->loops = malloc(100000);
	(*b)->loops = malloc(100000);
	(*a)->almost = malloc(100000);
	(*b)->almost = malloc(100000);
}

void    free_all(t_stack **a, t_stack **b)
{

	        free((*a)->s);
	        free((*b)->s);
	        free((*a)->sa_score);
	        free((*b)->sa_score);
	        free((*a)->pb_score);
	        free((*b)->pb_score);
	        free((*a)->loops);
	        free((*b)->loops);
	        free((*a)->almost);
	        free((*b)->almost);
		free(*a);
		free(*b);
}

void	start_sort(t_stack *a)
{
	init_score(a);
	set_bounds(a);
	gen_loops(a);
	gen_almost(a);
	rev_arr(a->almost, (int)a->top * (int)a->top);
	rev_arr(a->loops, (int)a->top * (int)a->top);
	algo_1(a);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	initialize(&a, &b);	
	while (argc > 1)
	{
		if (ft_isnum(argv[argc -1]))
			push(ft_atoi(argv[argc - 1]), a);
		else
		{
			ft_putstr("Error\n");
			exit (1);
		}
		argc--;
	}
	if (check_duplicates(a))
		ft_putstr("Error\n");
	else if (!is_sorted(a))
		start_sort(a);
	dump(a, b);
	free_all(&a, &b);
	return (0);
}
