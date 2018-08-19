/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:44:01 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:44:06 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	/*man page req:
	  -you read this incorrectly :(
	  -calculates length of string excluding null-terminator
	  -returns number of BYTES in the string s

*/
	size_t k;

	k = 0;
	while (*s++)
		k++;
	return (k);
}
