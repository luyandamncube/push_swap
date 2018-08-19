/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:41:54 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:41:59 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
	/*man page req:
	  - concatenate two strings
	  - overwrites null-terminator at end of dst
	  - adds a terminating null byte to dest afterwards
	  - strings may not overlap
	  - UNSAFE: if dst is not large enough, behavior is unpredictable (buffer overrun)
	  */
	int	i;
	int	j;

	j = 0;
	i = 0;
	j = ft_strlen(dest);
	while (src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}
