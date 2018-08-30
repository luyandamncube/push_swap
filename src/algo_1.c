/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:12:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/30 16:12:09 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

const char *instruction[] = 
{
	"none\n",
	"sa\n",
	"sb\n",
	"ss\n",
	"pa\n",
	"pb\n",
	"ra\n",
	"rb\n",
	"rr\n",
	"rra\n",
	"rrb\n",
	"rrr\n"
};

/* where a->top == 2 */
void		algo_1(t_stack *a)
{
	ft_putstr(instruction[swap(a)]);	
}

void		algo_2(t_stack *a)
{
	int k[2];

	k[0] = 0;
	while (k[0] < 16)
	{
		printf(" %d\n", a->loops[k[0]]);
		k[0]++;
	}
	printf("================================== \n");
	k[0] = 0;
	while (k[0] < 16)
	{
		printf(" %d\n", a->almost[k[0]]);
		k[0]++;
	}
}
