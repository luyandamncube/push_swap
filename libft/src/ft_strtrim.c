/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:46 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:46:49 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char				*ft_strtrim(const char *s)
{
	char	*start;
	char	*end;

	if (!s)
		return (NULL);
	start = (char *)s;
	end = ft_strchr(s, '\0') - 1;
	while (ft_iswhitespace(*start))
		start++;
	while (ft_iswhitespace(*end) && end > start)
		end--;
	return (ft_strsub(start, 0, 1 + end - start));
}

