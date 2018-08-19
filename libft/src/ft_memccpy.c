/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:38:56 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 15:43:30 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	/*
	   man page req:
	   -copy memory area
	   -copies no more than n bytes, stopping when the character c is found
	   -memory areas might overlap, results for this are undefined
	   */

	size_t i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)					//if statements do not inc/dec pointers!!
			return ((unsigned char *)(dst + i + 1));					//return pointer to character AFTER c 
		i++;
	}
	return (NULL);
}
