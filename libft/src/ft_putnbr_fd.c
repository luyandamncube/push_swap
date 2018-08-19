/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:21:49 by lmncube           #+#    #+#             */
/*   Updated: 2018/07/10 10:24:10 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int truncate;
	int called;

	called = 0;
	truncate = 1000000000;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == MAXNEG)
		{
			ft_putchar_fd('2', fd);
			nb %= 1000000000;
		}
		nb *= -1;
	}
	while (truncate > 0)
	{
		if ((nb / truncate) != 0 || called == 1 || (nb == 0 && truncate == 1))
		{
			called = 1;
			ft_putchar_fd((nb / truncate) + '0', fd);
		}
		nb %= truncate;
		truncate /= 10;
	}
}
