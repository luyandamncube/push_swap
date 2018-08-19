/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:44:49 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:44:58 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
	/*man page req:
	  -string n concatenate
	  -similar to strcat, although does not need to be null terminated if has n or more bytes
	  1) if at least least one byte is free in dest (k < n i think), null-terminate
	  */
	size_t	k;
	size_t	m;

	k = 0;
	m = ft_strlen(dest);
	while (src[k] && k < n)
		dest[m++] = src[k++];
	dest[m] = '\0';
	return (dest);
}
