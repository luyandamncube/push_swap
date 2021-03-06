/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_both.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 12:03:13 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/29 10:45:49 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rev_rot_both(t_stack *a, t_stack *b)
{
	int	a_ret;
	int	b_ret;

	a_ret = rev_rot(a);
	b_ret = rev_rot(b);
	if (a_ret && b_ret)
		return (11);
	else
		return (-1);
}
