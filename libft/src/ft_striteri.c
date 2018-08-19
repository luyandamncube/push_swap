/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:43:16 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:43:19 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	/*
	   man page req:
	   - Applies the function f to each character of the string passed as argument, and passing its index as first argument. 
	   - Each character is passed by address to f to be modified if necessary.
	   - parameters: 
	   1 string to iterate through 
	   2 the function to apply to each character of s and its index
	   */
	size_t	k;

	k = 0;
	if (s)
		while (*s)
		{
			f(k++, s++);
		}
}
