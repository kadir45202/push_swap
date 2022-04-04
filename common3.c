/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:57:37 by kcetin            #+#    #+#             */
/*   Updated: 2022/04/04 16:59:04 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list list)
{
	int a_yedek;

	a_yedek = list.a[list.a_size - 1];
	a_down_move_list(list);
	list.a[0] = a_yedek;
	write(1,"rra\n",4);
}

void	rrb(t_list list)
{
	int b_yedek;

	b_yedek = list.b[list.b_size - 1];
	b_down_move_list(list);
	list.b[0] = b_yedek;
	write(1,"rrb\n",4);
}

void	rrr(t_list list)
{
	int a_yedek;
	int b_yedek;
	
	a_yedek = list.a[list.a_size - 1];
	a_down_move_list(list);
	list.a[0] = a_yedek;
	b_yedek = list.b[list.b_size - 1];
	b_down_move_list(list);
	list.b[0] = b_yedek;
}