/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:23:53 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 15:29:38 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	/* man page req:
	   -locate char in string
	   -returns a pointer to LAST occurence of the character in the string
	   HOW TO RETURN A POINTER TO A SPECIFIC LOCATION OF AN ARRAY
	   1 assign a pointer to the array in memory
	   2 increment the pointer to the position you need 
*/
	int	k;

	k = (int)ft_strlen(s);
	while (k >= 0)
	{
		if (s[k] == (char)c)
			return ((char*)s + k);
		k--;
	}
	return (NULL);
}    
