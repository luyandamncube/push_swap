/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/05 16:35:47 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		start_sort(t_stack *a, t_stack *b)
{
	if (a->top < 5)
		algo_1(a);
	else
		algo_2(a, b);
}

int			main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	initialize(&a, &b);
	while (argc > 1)
	{
		if (ft_isnum(argv[argc - 1]))
			push(ft_atoi(argv[argc - 1]), a);
		else
		{
			ft_putstr("Error\n");
			exit(1);
		}
		argc--;
	}
	if (check_duplicates(a))
		ft_putstr("Error\n");
	else if (!is_sorted(a))
		start_sort(a, b);
	free_all(&a, &b);
	return (0);
}
