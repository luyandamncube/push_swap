/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:42:34 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:42:35 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_strdel(char **as)
{
	/*
	   man page req:
	   - Takes as a parameter the address of a string that need to be freed with free(3), 
	   - then sets its pointer to NULL.

NOTE: ** as denotes a parameter that is allowed to have its value changed by the function (pass by reference)
*/
	if(as)
	{
		free(*as);
		*as = NULL;
	}
}
