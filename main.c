/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:14:08 by kcetin            #+#    #+#             */
/*   Updated: 2022/04/09 17:11:43 by kcetin           ###   ########.fr       */
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

int there_is(int a, t_list *list)
{
	int i = 0;
	while(i < list->a_size)
	{
		if(list->a[i])
		{
			return 1;
		}
		i++;
	}
	return 0;
}

void parca(t_list *list)
{
	int value;

	value = 15;
	
	while(there_is(value, list)) // bir fonkla şunu kontrol et 25 sayısı yani param-etre k a nın içinde varmı
	{
		if(value > list->a[0])	// 25 yerine doğru indis gelecek yani benim bir sıralanmış c listem var ise bunun belirlediğim bazı indislerinden 25 bir parametre olucak
			pb(list);
		else
			ra(list);
		value += 15;
		if(value >= 10000)
			break;
	}
}


int int_to_int(int k)
{
return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_int(k / 2)));
}

void ft_malloc(t_list *list)
{ 
	list->c = malloc(10000000000);
	list->a = malloc(10000000000);
	list->b = malloc(10000000000);
	list->char_a = malloc(10000);
	list->char_b = malloc(10000);
}

void ft_free(t_list *list)
{
        free(list->a);
        free(list->b);
        free(list);
}

int main(int argc, char **argv)
{
	t_list *list = malloc(10000);
	int *c;
    ft_malloc(list);
    int i = 0;
	argc -= 1;
	
	list->a_size = argc;
	//list->b_size = argc;
	
	while(argc > 0)
	{
		list->a[i] = atoi(argv[i + 1]);
		//list->b[i] = atoi(argv[i + 1]);
		i++;
		argc--;
	}
	i = 0;

   // while(i < list->a_size || i < list->b_size)
	//{
//		list->a[i] = int_to_int(list->a[i]);
//		i++;
//	}

	c = malloc(4*(list->a_size + 10));
	ft_memcpy(c,list->a,list->a_size * 4);
	insertion(c,list->a_size, list);
	parca(list);

	i = 0;
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
	    i = 0;

	//printf("A B eleman sayısı %d %d\n", list->a_size, list->b_size);
	//while(i < list->a_size || i < list->b_size)
	//{	
	//	printf("%d   %d   %d\n", list->a[i], list->b[i], list->c[i]);
	//	i++;
	//}
	//printf("A B eleman sayısı %d %d\n", list->a_size, list->b_size);
        ft_free(list);
	return 0;
}
