/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:14:08 by kcetin            #+#    #+#             */
/*   Updated: 2022/05/01 15:55:30 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_bigger(t_list *list)
{
	int	i;
	int number;
	i = 0;
	number = list->a[0];
	while(i <= list->a_size)
	{
		if(list->a[i] > number)
		{
			number = list->a[i];
		}
		i++;
	}
	return number;
}

int	there_is(t_list *list, int number)
{
	int	i;
	int count;
	i = 0;
	count = 0;
	while(i <= list->a_size - 1)
	{
		if(list->a[i] <= number)
			return i;
		i++;
	}
	return -1;
}

void parca(t_list *list)
{
	int	i;

	i = 0;
	while(list->b_size)
	{
		if(list->b[0] < list->a[0])
		{
			pa(list);
		}
		else if(list->b[0] < list->a[1])
		{
			pa(list);
			sa(list);
		}
		else if(list->b[0] > list->a[0])
		{
			pb(list);
			sb(list);
		}
	}
}

void	make_list(t_list *list, int number)
{
	while (there_is(list, number) != -1)
	{
		if (list->a[0] <= number)
		{
			pb(list);
		}
		else
			ra(list);
	}
}

void	big_100(t_list *list)
{
	int		i;
	float	k;
	int		b;

	i = 0;
	k = (130 - (list->a_size + list->b_size) * 0.1) / 400;
	while (i++ < 50)
	{
		b = (list->a_size - 2) * k + list->b_size;
		make_list(list, list->c[b]);
	}
	if (list->a[0] > list->a[1])
		sa(list);
}

void	argc_value(t_list *list)
{
		big_100(list);
}

int main(int argc, char **argv)
{
	t_list *list = malloc(sizeof(t_list) * argc);
    
    int i = 0;
	argc -= 1;
	
	list->a_size = argc;
	ft_malloc(list);
	while(argc > 0)
	{
		list->a[i] = ft_atoi(argv[i + 1]);
		i++;
		argc--;
	}
	ft_memcpy(list->c,list->a,list->a_size * 4);
	insertion(list->c,list->a_size);

		argc_value(list);
		//atma(list);
		parca(list);
		yazdir(list);
        ft_free(list);
	return 0;
}
