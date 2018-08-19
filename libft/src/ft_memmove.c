/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:02:46 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:15:46 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void * dest, const void *src,  size_t n)
{
	/*
	   man page req:
	   - copies n bytes from memory area src to memory area dest
	   - the memory areas may overlap
	   - memory area is interpreted as unsigned char
	   LOGIC
	   1 account for null char at end of dest and src (len--)
	   2 if src < dst , copy BACKWARDS (n-- first)
	   3 else copy FORWARDS
	*/
	size_t 		k;

	k = 0;
	if (src < dest)
		while (n > 0)
		{
			n--;
			*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
		}
	else
		while(k < n)
		{	
			*(unsigned char*)(dest+k) = *(unsigned char*)(src+k);
			k++;
		}
	return(dest);
}
