/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:02:05 by kcetin            #+#    #+#             */
/*   Updated: 2022/04/04 16:49:47 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list list)
{
	int a_yedek;
	
	a_yedek = list.a[0];
	a_up_move_list(list);
	list.a[list.a_size - 1] = a_yedek;
	write(1, "rra\n", 4);
}

void	rb(t_list list)
{
	int b_yedek;
	
	b_yedek = list.b[0];
	b_up_move_list(list);
	list.b[list.b_size - 1] = b_yedek;
	write(1, "rra\n", 4);
}

void	rr(t_list list)
{
	int b_yedek;
	int a_yedek;
	
	b_yedek = list.b[0];
	b_up_move_list(list);
	list.b[list.b_size - 1] = b_yedek;
	a_yedek = list.a[0];
	a_up_move_list(list);
	list.a[list.a_size - 1] = a_yedek;
}