/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:16:44 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/05 14:17:32 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_smallest(t_stack *a, t_stack *b)
{
    set_bounds(a);
    while (a->s[a->top - 1] != a->first_)
        if (a->first < a->top / 2)
                ft_putstr(instruction(rev_rot(a)));
        else
                ft_putstr(instruction(rot(a)));
    ft_putstr(instruction(push_to(b, a)));
}
