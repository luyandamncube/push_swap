/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:53:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/07 12:04:30 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parser(int argc, char **argv, t_stack *a)
{
	int error_1;
	int error_2;

	if (argc == 1)
		return (0);
	if (argc == 2)
		error_1 = parser_2(argv, a);
	else
		error_2 = parser_1(argc, argv, a);
	if (error_1 == 0 || error_2 == 0)
		return (0);
	return (1);
}

int	parser_1(int argc, char **argv, t_stack *a)
{
	while (argc > 1)
	{
		if (ft_isnum(argv[argc - 1]))
			push(ft_atoi(argv[argc - 1]), a);
		else if (ft_strcmp(argv[argc - 1], "-v") == 0)
			a->debug = 1;
		else
			return (0);
		argc--;
	}
	return (1);
}

int	parser_2(char **argv, t_stack *a)
{
	char	**split;
	int		k;

	split = ft_strsplit(argv[1], ' ');
	k = 0;
	while (split[k])
		k++;
	k--;
	while (k > -1)
	{
		if (ft_isnum(split[k]))
			push(ft_atoi(split[k]), a);
		else if (ft_strcmp(split[k], "-v") == 0)
			a->debug = 1;
		else
			return (0);
		if (k > 0)
			free(split[k]);
		k--;
	}
	free(split);
	return (1);
}
