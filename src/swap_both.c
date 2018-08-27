/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_both.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 12:29:15 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/27 09:08:31 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		swap_both(t_stack *a, t_stack *b)
{
	int		a_ret;
	int		b_ret;

	a_ret = swap(a);
	b_ret = swap(b);
	init_score(a);
	if (a_ret && b_ret)
		return (3);
	else
		return (-1);
}
