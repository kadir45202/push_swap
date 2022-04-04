/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:41:32 by kcetin            #+#    #+#             */
/*   Updated: 2022/04/04 18:43:56 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc, char **argv)
{
	t_list list;
	list.a = malloc(100);
	list.b = malloc(100);
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
	rrr(list);
	printf("%d", list.a[0]);
	printf("%d", list.a[1]);
	printf("%d", list.a[2]);
	printf("%d\n", list.a[3]);
	printf("%d", list.b[0]);
	printf("%d", list.b[1]);
	printf("%d", list.b[2]);
	printf("%d", list.b[3]);
	
	free(list.a);
	free(list.b);
	return 0;
}