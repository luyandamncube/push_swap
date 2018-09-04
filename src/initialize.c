/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:22:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/04 15:30:01 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize(t_stack **a, t_stack **b)
{
	*a = malloc(sizeof(t_stack));
	*b = malloc(sizeof(t_stack));
	(*a)->name = 'a';
	(*b)->name = 'b';
	(*a)->top = 0;
	(*b)->top = 0;
	(*a)->s = malloc(500);
	(*b)->s = malloc(500);
	(*a)->sa_score = malloc(500);
	(*b)->sa_score = malloc(500);
	(*a)->pb_score = malloc(500);
	(*b)->pb_score = malloc(500);
	(*a)->loops = malloc(100000);
	(*b)->loops = malloc(100000);
	(*a)->almost = malloc(100000);
	(*b)->almost = malloc(100000);
}
