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

int		algo_1(t_stack *a, t_stack *b)
{
	const char *instruction[] = 
	{
		"none",
		"sa",
		"sb",
		"ss",
		"pa",
		"pb",
		"ra",
		"rb",
		"rr",
		"rra",
		"rrb",
		"rrr"
	};
	if (is_sorted(a->s, a->top))
		return (1);
	ft_putstr(instruction[push_to(b,a)]);	
	ft_putstr("\n");	
	return (1);
}
