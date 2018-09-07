/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:22:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/07 14:25:48 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_a(t_stack **a)
{
	*a = malloc(sizeof(t_stack));
	(*a)->name = 'a';
	(*a)->top = 0;
	(*a)->first = 0;
	(*a)->second = 0;
	(*a)->direction = 0;
	(*a)->first_ = 0;
	(*a)->second_ = 0;
	(*a)->s = malloc(500);
	(*a)->sa_score = malloc(500);
	(*a)->loops = malloc(100000);
	(*a)->almost = malloc(100000);
}

void	initialize_b(t_stack **b)
{
	*b = malloc(sizeof(t_stack));
	(*b)->name = 'b';
	(*b)->top = 0;
	(*b)->first = 0;
	(*b)->second = 0;
	(*b)->direction = 0;
	(*b)->first_ = 0;
	(*b)->second_ = 0;
	(*b)->s = malloc(500);
	(*b)->sa_score = malloc(500);
	(*b)->loops = malloc(100000);
	(*b)->almost = malloc(100000);
}

void	initialize(t_stack **a, t_stack **b)
{
	initialize_a(a);
	initialize_b(b);
}
