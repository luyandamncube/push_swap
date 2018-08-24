/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:44:17 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 14:36:33 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_duplicates(t_stack *input)
{
	int 	k[2];

	k[0] = 0;
	while (k[0] < input->top)
	{
		k[1] = k[0] + 1;
		while (k[1] < input->top)
		{
			if (input->s[k[0]] == input->s[k[1]])
				return (1);
			k[1]++;
		}
		k[0]++;
	}
	return (0);
}
