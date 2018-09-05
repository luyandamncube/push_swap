/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_permutations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:10:42 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/05 14:13:59 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        create_permutations(t_stack *a)
{
        init_score(a);
        gen_loops(a);
        gen_almost(a);
        rev_arr(a->almost, (int)a->top * (int)a->top);
        rev_arr(a->loops, (int)a->top * (int)a->top);
}
