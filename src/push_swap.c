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

void        initialize(t_stack **new, int name)
{
    *new = malloc(sizeof(t_stack));
    (*new)->top = (int)malloc(sizeof(int));
    (*new)->name = (int)malloc(sizeof(int));
    (*new)->high = (int)malloc(sizeof(int));
    (*new)->low = (int)malloc(sizeof(int));
    (*new)->name = name;
    (*new)->top = 0;
    (*new)->s = malloc(500);
    (*new)->sa_score = malloc(500);
    (*new)->pb_score = malloc(500);
    (*new)->loops = malloc(100000);
    (*new)->almost = malloc(100000);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	initialize(&a, 'a');	
	initialize(&b, 'b');	
	if (argc > 1)
	{
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
		{
			init_score(a);
			set_bounds(a);
			gen_loops(a);
			gen_almost(a);
			rev_arr(a->almost, (int)a->top * (int)a->top);
			rev_arr(a->loops, (int)a->top * (int)a->top);
			algo_1(a);
			dump(a, b);
			printf("sorted %d\n", is_sorted(a));
		}
	}
	free(a->s);
	free(a->sa_score);
	free(a->pb_score);
	free(a->loops);
	free(a->almost);
	free(b->s);
	free(b->sa_score);
	free(b->pb_score);
	free(b->loops);
	free(b->almost);
	free(a);
	free(b);
	/*
	free(a->top);
	free(a->name);
	free(a->top);
	free(a->high);
	free(a->low);
*/

	return (0);
}
