/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:45:14 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:45:16 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	/*man page req:
	  -size-bounded string copying
	  -error filled way to copy a string
	  -if size > 0, null-terminate
NOTE: ANY time we have a whole number as a parameter, make sure to check if you should use unsigned
*/
	size_t	 k;

	k = 0;
	while (src[k] && k < n)
	{
		dst[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dst[k] = '\0';
		k++;
	}
	return (dst);
}
