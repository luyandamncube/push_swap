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
	int i;
	int j;
	int	temp;
	i = len - 1;
	j = 0;
	while(i > j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i--;
		j++;
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
	ft_memcpy(current->loops, current->s, len + 500);
	bubble_sort(current->loops, len);
	ft_memcpy(temp, current->loops, len + 500);
	while (k < len)
	{
		rot_silent(temp, current->top );
		insert_here(current->loops, temp, mult, len);
		mult += len;
		k++;
	}
	free(temp);
	//reverse_arr(current->loops, pow(current->top, 2));
}

void	gen_almost(t_stack *current)
{
	int	k;
	int	m;
	int mult;
	int	len;
	int *temp;

	temp = malloc(1000);
	k = 0; 
	mult = 0;
	len = current->top;
	while (k < len)
	{
		m = 0;
		insert_here(current->almost, current->loops, mult, len);
		ft_arrswap(current->almost, mult, mult + 1);
		mult += len;
		//FIX MEEEEE :( 
		current->almost = current->loops + len;
		k++;
	}
	free(temp);
	//reverse_arr(current->almost, pow(current->top, 2));
}
