/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:08:57 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/04 15:41:49 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_instruction(char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		return (1);
	else if (ft_strcmp(str, "sb") == 0)
		return (2);
	else if (ft_strcmp(str, "ss") == 0)
		return (3);
	else if (ft_strcmp(str, "pa") == 0)
		return (4);
	else if (ft_strcmp(str, "pb") == 0)
		return (5);
	else if (ft_strcmp(str, "ra") == 0)
		return (6);
	else if (ft_strcmp(str, "rb") == 0)
		return (7);
	else if (ft_strcmp(str, "rr") == 0)
		return (8);
	else if (ft_strcmp(str, "rra") == 0)
		return (9);
	else if (ft_strcmp(str, "rrb") == 0)
		return (10);
	else if (ft_strcmp(str, "rrr") == 0)
		return (11);
	else
		return (0);
}

void		do_instruction(int choice, t_stack *a, t_stack *b)
{
	int instructions;

	if (choice == 1)
		instructions = swap(a);
	else if (choice == 2)
		instructions = swap(b);
	else if (choice == 3)
		instructions = swap_both(a, b);
	else if (choice == 4)
		instructions = push_to(a, b);
	else if (choice == 5)
		instructions = push_to(b, a);
	else if (choice == 6)
		instructions = rot(a);
	else if (choice == 7)
		instructions = rot(b);
	else if (choice == 8)
		instructions = rot_both(a, b);
	else if (choice == 9)
		instructions = rev_rot(a);
	else if (choice == 10)
		instructions = rev_rot(b);
	else if (choice == 11)
		instructions = rev_rot_both(a, b);
}

int			main(int argc, char **argv)
{
	int		k;
	int		fd;
	char	*ret;
	t_stack	*a;
	t_stack	*b;

	k = 0;
	fd = 0;
	initialize(&a, &b);
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
	while (1)
	{
		get_next_line(fd, &ret);
		if (check_instruction(ret))
			do_instruction(check_instruction(ret), a, b);
		else
		{
			if (is_sorted(a))
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
			exit(1);
		}
	}
	return (0);
}
