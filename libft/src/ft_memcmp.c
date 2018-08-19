/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:43 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:39:46 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int               ft_memcmp(const void *s1, const void *s2 , size_t n)
{
	/*
	   man page req:
	   - compare memory areas
	   - compares first n bytes of s1 and s2
	   - memory area is interpreted as unsigned char
	   */

	size_t	k;
	int		cmp;

	k = 0;
	while (k < n)
	{
		cmp = *(unsigned char *)(s1 + k) - *(unsigned char *)(s2 + k);
		if (cmp != 0)
			return (cmp);
		k++;
	}
	return (0);
}
