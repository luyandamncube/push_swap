/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:33 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:46:37 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(const char *s, unsigned int start, size_t len)
{
	/*
	   man page req:
	   - Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument. 
	   - The substring begins at index start and is of size len. 
	   - If start and len aren’t refering to a valid substring, the behavior is undefined. 
	   - If the allocation fails, the function returns NULL.
	   */
	size_t 		k;
	char 		*mem;
	  
	k = 0;
	if (NULL == (mem = malloc(len + 1)))
	  	return(NULL);
	if (s)
	{
		while(k < len)
		{
			mem[k] = s[start + k];
			k++;
		}
	}
	mem[k] = '\0';
	return(mem);
}
