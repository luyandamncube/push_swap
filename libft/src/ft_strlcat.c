/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:43:38 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:43:40 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	/* man page req:
	   - size-bounded string concatenation
	   - safer, less buggy version of strncat
	   - It will append at most size - strlen(dst) - 1 bytes
	   - returns the total length of the string they tried to create
	   1) if at least least one byte is free in dest, null-terminate
	   2) returns buffer size: initial length of dst + length of src

*/
	size_t		dst_len;
	size_t		src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (src_len + size);
	ft_strncat(dst, src, size - (dst_len + 1));
	return (dst_len + src_len);
}
