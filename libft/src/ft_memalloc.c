/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:19 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:39:31 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	/*
	   man page req:
	   - allocates size bytes and returns a pointer to allocated memory
	   - memory is NOT initialised
	   - if size = 0, returns NULL or unique pointer that can be passed to free
	   - if mem allocation fails, returns NULL
	   */

	unsigned char	*mem;

	if (size == 0)
		return (NULL);
	if (NULL == (mem = malloc(sizeof(size_t) * size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
