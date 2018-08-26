/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:36:00 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/26 11:58:22 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to(t_stack *dest, t_stack *src)
{
	int		temp;

	temp = src->s[src->top - 1];
	src->top--;
	dest->s[dest->top] = temp;
   	dest->top++;	
}
