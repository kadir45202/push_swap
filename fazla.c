/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fazla.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:32:50 by kcetin            #+#    #+#             */
/*   Updated: 2022/05/01 12:10:22 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_malloc(t_list *list)
{ 
	list->c = malloc(10000000000);
	list->a = malloc(10000000000);
	list->b = malloc(10000000000);
}

void ft_free(t_list *list)
{
        free(list->a);
        free(list->b);
		free(list->c);
        free(list);
}

void atma(t_list *list)
{
	while(list->b_size)
	{
		if(list->c[list->b_size - 1] == list->b[0])
		{
			pa(list);
		}
		else
		{
		rrb(list);
		}
	}
}

void yazdir(t_list *list)
{
	int i = 0;
		printf("A B eleman sayısı %d %d\n", list->a_size, list->b_size);
	while(i < list->a_size || i < list->b_size)
	{	
		printf("%d   %d   %d\n", list->a[i], list->b[i], list->c[i]);
		i++;
	}
	printf("A B eleman sayısı %d %d\n", list->a_size, list->b_size);
}