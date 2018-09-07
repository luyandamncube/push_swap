/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:25:48 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/07 14:36:25 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		free_a(t_stack **a)
{
	free((*a)->s);
	free((*a)->sa_score);
	free((*a)->loops);
	free((*a)->almost);
	free(*a);
}

static void		free_b(t_stack **b)
{
	free((*b)->s);
	free((*b)->sa_score);
	free((*b)->loops);
	free((*b)->almost);
	free(*b);
}

void			free_all_ret(t_stack **a, t_stack **b, char **ret)
{
	free_a(a);
	free_b(b);
	free(*ret);
}

void			free_all(t_stack **a, t_stack **b)
{
	free_a(a);
	free_b(b);
}
