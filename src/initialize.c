/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:11:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 16:01:43 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		initialize(t_stack **new, int name)
{
	*new = (t_stack*)malloc(sizeof(t_stack));
	(*new)->top = (int)malloc(sizeof(int));
	(*new)->name = (int)malloc(sizeof(int));
	(*new)->name = name;
	(*new)->top = 0;
	(*new)->s = malloc(4096);
}
