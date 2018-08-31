/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:12:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/31 16:24:43 by lmncube          ###   ########.fr       */
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

/* where a->top > 2 */
void		algo_2(t_stack *a)
{
	int k;
	int flag;

	k = 0 ;
	flag = 0;
	printf("found loop %d\n", is_loop(a));
	printf("found permutation %d\n", is_almost(a));
	while (is_sorted(a) == 0)
	{
		if (is_loop(a) && is_sorted(a) == 0)
			ft_putstr(instruction[rot(a)]);	
		else if (is_almost(a) && is_sorted(a) == 0)	
			ft_putstr(instruction[swap(a)]);
		else if ((!is_almost(a) || !is_loop(a)) && is_sorted(a) == 0)
		{
			if (k > 1  && flag == 0)
			{
				ft_putstr(instruction[swap(a)]);
				flag++;
			}
			else
				ft_putstr(instruction[rot(a)]);	
		}
		k++;
	}
	
}
