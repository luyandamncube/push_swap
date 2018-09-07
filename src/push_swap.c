/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/07 15:39:10 by lmncube          ###   ########.fr       */
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
	if (!parser(argc, argv, a))
		print_error();
	if (check_duplicates(a))
		print_error();
	else if (!is_sorted(a))
		start_sort(a, b);
	free_all(&a, &b);
	return (0);
}
