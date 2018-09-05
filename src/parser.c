/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:53:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/05 17:19:29 by lmncube          ###   ########.fr       */
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
	printf("argv[1] %s\n", argv[1]);
	k = 0;
	while (split[k])
	{
		if (ft_isnum(split[k]))
			push(ft_atoi(argv[k]), a);
		else
		{
			ft_putstr("Error\n");
			exit(1);
		}
		k++;
	}
}
