/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:57 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:40:00 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_memdel(void **ap)
{
	/*
	   man page req:
	   - Takes as a parameter the address of a memory area that needs
	   to be freed with free(3), then puts the pointer to NULL

NOTE: ** ap denotes a parameter that is allowed to have its value changed by the function (pass by reference)
*/
		if(ap)
		{
			free(*ap);
			*ap = NULL;
		}
}
