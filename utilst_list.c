#include "push_swap.h"

void	a_down_move_list(t_list *list)
{
		int a = 0;

		while(a <= list->a_size)
		{
			a++;
		}
		while(a >= 0)
		{
			list->a[a + 1] = list->a[a];
			a--;
		}
		
}

void a_up_move_list(t_list *list)
{
        int b = 0;
	
        while(b <= list->a_size)
                {
                        list->a[b] = list->a[b + 1];
                        b++;
                }
}

void	b_down_move_list(t_list *list)
{
		int c = 0;

		while(c <= list->b_size)
		{
			c++;
		}
		while(c >= 0)
		{
			list->b[c + 1] = list->b[c];
			c--;
		}
}

void b_up_move_list(t_list *list)
{
        int d = 0;
	
        while(d <= list->b_size)
                {
                        list->b[d] = list->b[d + 1];
                        d++;
                }
}
