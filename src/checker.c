/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:08:57 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/07 14:37:14 by lmncube          ###   ########.fr       */
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
	if (choice == 1)
		swap(a);
	else if (choice == 2)
		swap(b);
	else if (choice == 3)
		swap_both(a, b);
	else if (choice == 4)
		push_to(a, b);
	else if (choice == 5)
		push_to(b, a);
	else if (choice == 6)
		rot(a);
	else if (choice == 7)
		rot(b);
	else if (choice == 8)
		rot_both(a, b);
	else if (choice == 9)
		rev_rot(a);
	else if (choice == 10)
		rev_rot(b);
	else if (choice == 11)
		rev_rot_both(a, b);
	if (a->debug)
		dump(a, b);
}

int			main(int argc, char **argv)
{
	char	*ret;
	t_stack	*a;
	t_stack	*b;

	initialize(&a, &b);
	if (!parser(argc, argv, a))
		print_error();
	if (check_duplicates(a))
		print_error();
	if (a->debug)
		dump(a, b);
	while (1)
	{
		get_next_line(0, &ret);
		if (check_instruction(ret))
			do_instruction(check_instruction(ret), a, b);
		else if (!check_instruction(ret) && !is_sorted(a))
			print_error();
		else if (is_sorted(a) && b->top == 0)
			print_success();
		else
			print_unsorted();
	}
	free_all_ret(&a, &b, &ret);
	return (0);
}
