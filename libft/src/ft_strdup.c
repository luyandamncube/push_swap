/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:27:38 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 15:28:37 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
	/*man page req:
	  -return ptr to string which is a duplicate of string s
	  -memory for new string is obtained with "malloc", freed with "free"
	  -delimit with null-terminator
	  -return NULL if no space was allocated
	  */
	char	*copy;
	int		len;

	len = ft_strlen(s);
	if (NULL == (copy = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = 0;
	while (s[len])
	{
		copy[len] = s[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
