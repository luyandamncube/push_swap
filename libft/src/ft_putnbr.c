/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:41:00 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:41:03 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printzero(void)
{
	write (1, "0", 1);
	return ;
}

void	ft_putnbr(int n)
{
	unsigned long int	exp;
	unsigned int		temp;
	float				f;

	if (n < 0)
	{
		temp = -n;								//Account for negative sign
		write(1, "-", 1);
	}
	else
		temp = n;
	if (n == 0)
		ft_printzero();							//Account for if input is zero
	exp = 1;
	while (temp >= exp)
		exp *= 10;								//Create div number that has same no of decimal spaces
	exp /= 10;
	while (exp >= 1)
	{
		f = temp / exp;
		ft_putchar((long int)f + '0');
		temp -= ((long int)f) * exp;
		exp /= 10;
	}
}
