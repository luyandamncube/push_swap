/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:23:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 15:02:37 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a; 
	t_stack	*stack_b; 
	t_stack	*input_stack; 
	int		input[4096];
	int		size;
	int		k;

	size = argc - 1;
	k = 0;
	//check_integers
	initialize(&input_stack);	
	if (argc > 1)
	{
		while (argc > 1)
		{
			push(ft_atoi(argv[k + 1]), input_stack);
			k++;
			argc--;
		}
		if (check_duplicates(input_stack))
			ft_putstr("Error\n");
	}
	return (0);
}
