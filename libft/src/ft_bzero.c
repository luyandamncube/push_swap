/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:29:50 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 15:36:25 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s , size_t n)
{
	/*
	   man page req:
	   - sets first n bytes of the area starting at s to zero
	   - basically fills an array starting from the pointer, to 0
	   - when dealing with void data type, remember to cast (explicit or implictit)
	   TO ACCESS THE AREA OF MEMORY POINTED TO BY *s:
	   1 you need to create a pointer and assign it the value of *s
	   2 Assign zero values to each block 
	   - memory area is interpreted as unsigned char
	   */
	size_t 		k;

	k = 0;
	while(k < n )
	{
		*(unsigned char *)(s+k) = 0;
		k++;
	}
}
