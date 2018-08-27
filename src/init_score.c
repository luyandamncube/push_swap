/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_score.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 10:21:39 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/27 11:52:01 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		init_score(t_stack *current)
{	
	int	mid;
	int	k;
	int	score;

	mid = current->top / 2;
	k = 0;
	score = 0;
	while (k < current->top)
	{
		current->sa_score[k] = score;
		if (k < mid)
			score++;
		else if (current->top % 2 && k == mid)
			score = score;
		else	
			score--;
		k++;
	}
}
