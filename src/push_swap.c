/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 16:43:37 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a; 
	t_stack	*stack_b; 
	int		input[4096];
	int		size;
	int		k;

	size = argc - 1;
	k = 0;
	initialize(&stack_a, 'a');	
	initialize(&stack_b, 'b');	
	if (argc > 1)
	{
		while (argc > 1)
		{
			if (ft_isnum(argv[k + 1]))
				push(ft_atoi(argv[k + 1]), stack_a);
			else
			{
				ft_putstr("Error\n");
				exit (1);
			}
			k++;
			argc--;
		}
		if (check_duplicates(stack_a))
			ft_putstr("Error\n");
		else
			dump(stack_a, stack_b);
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
