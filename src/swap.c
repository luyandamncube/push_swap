/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:22:22 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/26 12:27:43 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		swap(t_stack *current)
{
	int	temp1;
	int	temp2;

	temp1 = pop(current);
	temp2 = pop(current);
	push(temp1, current);
	push(temp2, current);
	if (current->name == 'a')
	{
		init_score(current);
		return (1);
	}
	else
		return (2);
}
