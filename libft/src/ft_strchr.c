/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:15:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:18:32 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	/* man page req:
	   -locate char in string
	   -returns a pointer to FIRST occurence of the character in the string
	   -basically returns everything after and including the character
	   HOW TO RETURN A POINTER TO A SPECIFIC LOCATION OF AN ARRAY
	   1 assign a pointer to the array in memory
	   2 increment the pointer to the position you need 
	   */
	int			k;
	int 		m;

	k = 0;
	m = 0;
	while (s[k])
		k++;
	if (s[k] == (char)c)
		return ((char*)&s[k]);					//instead of returning (s) from s++ 
	k++;
	while (m < k)
	{
		if (s[m] == (char)c)
			return ((char*)&s[m]);
		m++;
	}
	return (NULL);
}
