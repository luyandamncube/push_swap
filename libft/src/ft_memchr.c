/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:49:11 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:01:26 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c , size_t n)
{
	/* man page req:
	   - scan memory for character
	   - memory area is interpreted as unsigned char
	   HOW TO RETURN A POINTER TO A SPECIFIC LOCATION OF AN ARRAY
	   1 assign a pointer to the array in memory
	   2 increment the pointer to the position you need 
	   */
	size_t		k;

	k = 0;
	while(k < n)
	{
		if (*(char*)(s+k) == (char)c)
			return((char*)(s+k));
		k++;
	}
	return (NULL);
}
