/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:14:08 by kcetin            #+#    #+#             */
/*   Updated: 2022/04/20 18:05:41 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (0);
	while (n--)
		*d++ = *s++;
	return (dst);
}

void parca(t_list *list)
{
	int value;
	int i;
	int j;
	value = 30;
	i = 0;
	j = 0;
	while(list->a_size)
	{
		while(list->a_size)
		{
			if(list->a[0] <= value)
			{
				pb(list);
			}
			else if(list->a_size != 0)
			{
					value += 30;
			}
			else
				ra(list);
			//printf("%d\n", list->b_size);
			i++;
		}
	}
	
}

int main(int argc, char **argv)
{
	t_list *list = malloc(10000);
	int *c;
    ft_malloc(list);
    int i = 0;
	argc -= 1;
	
	list->a_size = argc;
	
	while(argc > 0)
	{
		list->a[i] = atoi(argv[i + 1]);
		i++;
		argc--;
	}

	c = malloc(4*(list->a_size + 10));
	ft_memcpy(c,list->a,list->a_size * 4);
	insertion(c,list->a_size, list);
	parca(list);
		atma(list);
	//	yazdir(list);
        ft_free(list);
	return 0;
}
