/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:25:48 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/04 15:33:44 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		free_all(t_stack **a, t_stack **b)
{
	free((*a)->s);
	free((*b)->s);
	free((*a)->sa_score);
	free((*b)->sa_score);
	free((*a)->pb_score);
	free((*b)->pb_score);
	free((*a)->loops);
	free((*b)->loops);
	free((*a)->almost);
	free((*b)->almost);
	free(*a);
	free(*b);
}
