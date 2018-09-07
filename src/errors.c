/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 12:01:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/07 12:11:50 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	ft_putstr("Error\n");
	exit(1);
}

void	print_success(void)
{
	ft_putstr("OK\n");
	exit(1);
}

void	print_unsorted(void)
{
	ft_putstr("KO\n");
	exit(1);
}
