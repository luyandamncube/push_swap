/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:01 by lmncube           #+#    #+#             */
/*   Updated: 2018/07/10 10:23:41 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int		count;

	count = 1;
	if (n < 0)
		count = 2;
	while (n /= 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	/*man page req:
	  - convert integer to an  string (int to ascii)
	  - itoa does not detect errors
		ORDER: [LZMCS]
		Z - Check if zero or largest integer
		L - Check integer length				HELPER FUNCTION
		M - Allocate memory (string)			HELPER FUNCTION
		C - Number conversion
		S - Check sign
	*/
	char	*str;
	int		len;
	int 	neg;

	neg = n < 0 ? 1 : 0;
	//[L] Check integer length
	len = ft_intlen(n);
	//[Z] Check if zero or smallest integer
	if (n == MAXNEG)
		return (ft_strdup("-2147483648"));
	
	if (neg)	
		n *= -1;
	//[M] Allocate memory (string)
	if (NULL != (str = ft_strnew(len)))
	{
	//[C] Number conversion algorithm
		while (len > 0)
		{
			str[len - 1] = (n % 10) + 48;
			n /= 10;
			len--;
		}
	//[S] Check sign	
		if (neg)
			str[0] = '-';
	}
	return (str);                            
}
