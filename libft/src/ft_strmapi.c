/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:44:35 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:44:39 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	/*
	   man page req:
	   - Applies the function f to each character of the string given as argument to create a 
	   “fresh” new string (with malloc(3)) resulting from the successive applications of f
	   -has an index
	   */
	size_t	size;
	size_t	i;
	char	*out;

	if (s)
	{
		size = ft_strlen(s);
		if (NULL == (out = malloc(sizeof(char) * size + 1)))
			return (NULL);
		i = -1;
		while (++i < size)
			out[i] = (*f)(i, s[i]);
		out[i] = '\0';
		return (out);
	}
	return (NULL);
}
