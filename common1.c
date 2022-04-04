#include "push_swap.h"

void sa(t_list list)
{
        int c;
        if(list.a[1] != '\0' && list.a[1])
        {
        c = list.a[0];
        list.a[0] = list.a[1];
        list.a[1] = c;
        }
       write(1, "sa\n", 3);
}

void sb(t_list list)
{
        int i;
        if(list.b[1] != '\0' && list.b[1])
        {
        i = list.b[0];
        list.b[0] = list.b[1];
        list.b[1] = i;
        }
       write(1, "sa\n", 3);
}

void ss(t_list list)
{
	    int i;
        if(list.b[1] != '\0' && list.b[1])
        {
        i = list.b[0];
        list.b[0] = list.b[1];
        list.b[1] = i;
        }
		int c;
        if(list.a[1] != '\0' && list.a[1])
        {
        c = list.a[0];
        list.a[0] = list.a[1];
        list.a[1] = c;
        }
}