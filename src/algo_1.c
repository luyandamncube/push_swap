/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:12:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/31 16:24:43 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

const char *instruction[] = 
{
	"none\n",
	"sa\n",
	"sb\n",
	"ss\n",
	"pa\n",
	"pb\n",
	"ra\n",
	"rb\n",
	"rr\n",
	"rra\n",
	"rrb\n",
	"rrr\n"
};

/* where a->top == 2 */
void		algo_1(t_stack *a)
{
	if (!is_sorted(a))
		ft_putstr(instruction[swap(a)]);	
}

/* where a->top > 2 */
void		algo_2(t_stack *a)
{
	int adjust;
	
	adjust = 0;
	while (!is_sorted(a))
	{
		if (!is_almost(a)  && !is_loop(a) && adjust++ < 2)
			ft_putstr(instruction[swap(a)]);
		if (is_loop(a))
			ft_putstr(instruction[rot(a)]);
		else if (is_almost(a))
			ft_putstr(instruction[swap(a)]);
		else
			ft_putstr(instruction[rot(a)]);
	}
}
