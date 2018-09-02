/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:11:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/29 15:16:54 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		initialize(t_stack **new, int name)
{
	*new = malloc(sizeof(t_stack));
	(*new)->top = (int)malloc(sizeof(int));
	(*new)->name = (int)malloc(sizeof(int));
	(*new)->high = (int)malloc(sizeof(int));
	(*new)->low = (int)malloc(sizeof(int));
	(*new)->name = name;
	(*new)->top = 0;
	(*new)->s = malloc(500);
	(*new)->sa_score = malloc(500);
	(*new)->pb_score = malloc(500);
	(*new)->loops = malloc(100000);
	(*new)->almost = malloc(100000);
}
