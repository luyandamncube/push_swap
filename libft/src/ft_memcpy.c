/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:36:36 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 15:58:18 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t 		k;

	k = 0;
	if (n == 0 || dst == src)
		return(dst);
	while(k < n)
	{
		//DONT use dst++, compiler reads left to right and shifts dst THEN src instead of shifting them simoultaneously
		*(unsigned char *)(dst + k) = *(unsigned char *)(src + k); 	
		k++;
	}
	return(dst);
}
