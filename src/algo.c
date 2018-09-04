/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:03:34 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/04 14:18:01 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_1(t_stack *a)
{
	int adjust;

	adjust = 0;
	while (!is_sorted(a))
	{
		if (!is_almost(a) && !is_loop(a) && adjust++ < 2)
			ft_putstr(instruction(swap(a)));
		if (is_loop(a))
			ft_putstr(instruction(rot(a)));
		else if (is_almost(a))
			ft_putstr(instruction(swap(a)));
		else
			ft_putstr(instruction(rot(a)));
	}
}
