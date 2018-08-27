/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dump.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:10:44 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/27 11:44:19 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		dump(t_stack *a, t_stack *b)
{
	int biggest;

	biggest = a->top > b->top ? a->top : b->top;
	biggest--;
	while (biggest > -1)
	{
		a->top > biggest ? ft_putnbr(a->s[biggest]) : ft_putstr(" ");
		ft_putstr("\t\t");
		b->top > biggest ? ft_putnbr(b->s[biggest]) : ft_putstr(" ");
		ft_putstr("\n");
		biggest--;
	}
	ft_putstr("\n");
	ft_putstr("-\t\t-\n");
	ft_putstr("\033[1;32;40ma\t\t");
	ft_putstr("\033[1;31;40mb\n");
}
