/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:53:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/06 08:54:02 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parser_1(int argc, char **argv, t_stack *a)
{
	while (argc > 1)
	{
		if (ft_isnum(argv[argc - 1]))
			push(ft_atoi(argv[argc - 1]), a);
		else
		{
			ft_putstr("Error\n");
			exit(1);
		}
		argc--;
	}
}

void	parser_2(char **argv, t_stack *a)
{
	char 	**split;
	int 	k;

	split = ft_strsplit(argv[1], ' ');
	k = 0;
	while (split[k])
		k++;
	k--;	
	while (k > -1)
	{
		if (ft_isnum(split[k]))
		{
			push(ft_atoi(split[k]), a);
		}
		else
		{
			ft_putstr("Error\n");
			exit(1);
		}
		k--;
	}
}
