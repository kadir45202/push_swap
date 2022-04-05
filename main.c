/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:41:32 by kcetin            #+#    #+#             */
/*   Updated: 2022/04/05 06:20:28 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc, char **argv)
{
	t_list list;
	list.a = malloc(1000);
	list.b = malloc(1000);
	int i = 0;
	argc -= 1;
	list.a_size = argc;
	list.b_size = argc;
	while(argc > 0)
	{
		list.a[i] = atoi(argv[i + 1]);
		list.b[i] = atoi(argv[i + 1]);
		i++;
		argc--;
	}


	i = 0;
	printf("A B\n");
	while(i < list.a_size)
	{
		
		printf("%d %d\n", list.a[i ], list.b[i]);
		i++;
	}
	
	free(list.a);
	free(list.b);
	return 0;
}
