#include "push_swap.h"

void	a_down_move_list(t_list list)
{
		list.a_size += 1;
		int i = 0;

		while(i <= list.a_size)
		{
			i++;
		}
		while(i >= 0)
		{
			list.a[i + 1] = list.a[i];
			i--;
		}
}

void a_up_move_list(t_list list)
{
        int i = 0;
	
        while(i <= list.a_size)
                {
                        list.a[i] = list.a[i + 1];
                        i++;
                }
		list.a_size -= 1;
}

void	b_down_move_list(t_list list)
{
		list.b_size += 1;
		int i = 0;

		while(i <= list.b_size)
		{
			i++;
		}
		while(i >= 0)
		{
			list.b[i + 1] = list.b[i];
			i--;
		}
}

void b_up_move_list(t_list list)
{
        int i = 0;
	
        while(i <= list.b_size)
                {
                        list.b[i] = list.b[i + 1];
                        i++;
                }
		list.b_size -= 1;
}