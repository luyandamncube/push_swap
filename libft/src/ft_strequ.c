/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:42:53 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:42:56 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strequ(const char *s1, char const *s2)
{
	/*
	   man page req:
	   - Lexicographical comparison between s1 and s2. 
	   - If the 2 strings are identical the function returns 1, or 0 otherwise.
	   */
	if (s1 && s2)
		return (ft_strcmp(s1, s2) == 0);
	return (1);
}
