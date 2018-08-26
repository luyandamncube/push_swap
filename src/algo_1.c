/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:12:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/26 14:49:25 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	1 Create a temporary stack say tmpStack.
	2 While input stack is NOT empty do this:
		-Pop an element from input stack call it temp
		-while temporary stack is NOT empty and top of temporary stack is greater than temp,
			> pop from temporary stack and push it to the input stack
			> push temp in temporary stack
	3 The sorted numbers are in tmpStack
*/
void	algo_1(t_stack *a, t_stack *b)
{
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
};*/
	/*
	while (a->top)
	{
		temp = pop(a);
		while (b->top && peek(b) > temp)
		{
			push_me = push_to(a, b);
			printf("%s\n", instruction[push_me]);
			push(temp, b);
		}
		//if (b->top == 0)
			push(temp, b);
	}
	*/
}
