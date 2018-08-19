/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:40:38 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 15:42:37 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void * s, int c, size_t n)
{
	/*
	   man page req:
	   - sets first n bytes of the area starting at s to constant byte c
	   - basically fills an array starting from the pointer, to 0
	   - when dealing with void data type, remember to cast (explicit or implictit)
	   */
	size_t			i;
	char	*mem;

	i = 0;
	mem = (char *)s;
	while (i < n)
		mem[i++] = (char)c;
	return (s);
}
