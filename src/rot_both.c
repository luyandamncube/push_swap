/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_both.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 12:00:22 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/26 12:46:05 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rot_both(t_stack *a, t_stack *b)
{
	int a_ret;
	int	b_ret;

	a_ret = rot(a);
	b_ret = rot(b);
	if (a_ret && b_ret)
		return (8);
	else
		return (-1);
}
