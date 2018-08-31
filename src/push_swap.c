/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/31 16:21:24 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			algo_2(a);
			dump(a, b);
			printf("sorted %d\n", is_sorted(a));
		}
	}
	free(a);
	free(b);
	return (0);
}
