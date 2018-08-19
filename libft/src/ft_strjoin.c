/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:43:26 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:43:27 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(const char *s1, char const *s2)
{
    /*
        man req:
            - Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’, 
             result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.
    */
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	if (!(new = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	if (s1)
		ft_strcpy(new, (char*)s1);
	if (s2)
		ft_strcat(new, (char*)s2);
	return (new);
}
