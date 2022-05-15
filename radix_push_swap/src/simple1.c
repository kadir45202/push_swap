/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:51:31 by kcetin            #+#    #+#             */
/*   Updated: 2022/05/15 01:04:16 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	call(t_list **stack_a)
{
	ra(stack_a);
	sa(stack_a);
	rra(stack_a);
}

void	caller(t_list **stack_a)
{
	sa(stack_a);
	rra(stack_a);
}
