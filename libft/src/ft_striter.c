/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:43:06 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:43:08 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striter(char *s, void (*f)(char *))
{
	/*
	   man page req:
	   - Applies the function f to each character of the string passed as argument. 
	   - Each character is passed by address to f to be modified if necessary.
USAGE: f(next_pointer);
*/	
	if(s)
		while(*s)
			f(s++);
}