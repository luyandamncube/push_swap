/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:15:34 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/04 15:36:36 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*instruction(int n)
{
	if (n == 0)
		return ("none\n");
	if (n == 1)
		return ("sa\n");
	if (n == 2)
		return ("sb\n");
	if (n == 3)
		return ("ss\n");
	if (n == 4)
		return ("pa\n");
	if (n == 5)
		return ("pb\n");
	if (n == 6)
		return ("ra\n");
	if (n == 7)
		return ("rb\n");
	if (n == 8)
		return ("rr\n");
	if (n == 9)
		return ("rra\n");
	if (n == 10)
		return ("rrb\n");
	if (n == 11)
		return ("rrr\n");
	return ("");
}
