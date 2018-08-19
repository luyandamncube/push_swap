/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:48:04 by lmncube           #+#    #+#             */
/*   Updated: 2018/07/10 09:51:09 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *str)
{
	int		count;
	int		k;

	count = 0;
	k = 0;
	while (str[k])
	{
		if (!ft_iswhitespace(str[k]) && ((ft_iswhitespace(str[k] + 1)) \
			|| str[k] == '\0'))
			count++;
		k++;
	}
	return (count);
}
