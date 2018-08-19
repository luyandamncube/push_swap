/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 14:44:23 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 14:47:32 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char  *str)
{
	/*man page req:
	  -	convert string to an integer (ascii to int)
	  -	atoi does not detect errors
	  - atoi skips ahead of characters, pays no attention to errors with trailing characters
	ORDER: [ESZCL]
	E - Check escape characters				HELPER FUNCTION
	S - Check sign
	C - Number conversion
*/
	int sign;
	int result;

	result = 0;
	sign = 1;
	//[E] Check escape characters 9-13,32	
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	//[s] Check sign -/+
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	//[C] Number conversion
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (sign * result);
}
