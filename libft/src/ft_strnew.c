/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:45:34 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:45:36 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnew(size_t size)
{
	/*man page req:
	  - allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. 
	  - each character of the string is initialized at’\0’. 
	  - if the allocation fails the function returns NULL.
	  */
	char		*new_str;
	size_t		k;

	k = 0;
	if (NULL == (new_str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (k < (size + 1))
	{
		new_str[k] = '\0';
		k++;
	}
	return (new_str);
}
