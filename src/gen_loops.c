/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_loops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:59:12 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/30 16:25:47 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_here(int *dest, int *src, int pos, int size)
{
	int  k;

	k = 0;
	while (k < size)
	{
		dest[pos] = src[k];
		pos++;
		k++;
	}	
}

void	reverse_arr(int *arr, int len)
{
	int k;
	int m;
	int	temp;
	k = len - 1;
	m = 0;
	while(k > m)
	{
		temp = arr[k];
		arr[k] = arr[m];
		arr[m] = temp;
		k--;
		m++;
	}
}

void	gen_loops(t_stack *current)
{
	int k;
	int mult;
	int len;
	int *temp;

	temp = malloc(1000);
	k = 0;
	mult = current->top;
	len = current->top;
	ft_memcpy(current->loops, current->s, 500);
	bubble_sort(current->loops, len);
	ft_memcpy(temp, current->loops, 500);
	while (k < len)
	{
		rot_silent(temp, current->top );
		insert_here(current->loops, temp, mult, len);
		mult += len;
		k++;
	}
	free(temp);
	reverse_arr(current->loops, len * len);
}

void	gen_almost(t_stack *current)
{
	int k;
	int mult;
	int len;

	k = 0;
	mult = 0;
	len = 0;
	ft_memcpy(current->almost, current->loops, 1000);
	while (k < len)
	{
		ft_arrswap(current->almost, mult, mult +1);	
		mult += len;
		k++;
	}
	reverse_arr(current->loops, len * len);
}
