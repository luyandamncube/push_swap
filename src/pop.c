/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:12:17 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 13:01:01 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		pop(t_stack *current)
{
	int	temp;

	temp = current->s[current->top - 1];
	current->top--;
	init_score(current);
	return (temp);
}
