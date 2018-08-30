/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:12:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/29 16:19:46 by lmncube          ###   ########.fr       */
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
	ft_putstr(instruction[swap(a)]);	
}

void		algo_2(t_stack *a)
{
	if (a->s[1] == a->low)
	{
		if (a->s[0] < a->s[2])
			ft_putstr(instruction[rot(a)]);
		else
			ft_putstr(instruction[swap(a)]);
	}
	else
	{
		ft_putstr(instruction[swap(a)]);
		ft_putstr(instruction[rev_rot(a)]);
	}
}
