/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:12:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/27 10:19:47 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_1(t_stack *a, t_stack *b)
{
	if (a->top == b->top)
		printf("yes\n");
/*
	int		push_me;
	int		temp;
	char *instruction[] = 
	{
		"sa",
		"sb",
		"ss",
		"pa",
		"pb",
		"ra",
		"rb",
		"rr",
		"rra",
		"rrb",
		"rrr"
	};
	while (a->top)
	{
		temp = pop(a);
		while (b->top && peek(b) > temp)
		{
			push_me = push_to(a, b);
			//printf("%s\n", instruction[push_me]);
		}
		push(temp, b);
	}
	while (b->top)
	{
		push_me = push_to(a, b);
		//printf("%s\n", instruction[push_me]);
	}
	*/
}
