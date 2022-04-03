#include "push_swap.h"

void rr(int *a, int *b)
{
        int i = 0;
        while(a[i] != '\0')
                {
                        i++;
                }
        int keep;
        keep = a[0];
        up_move_list(a);
        a[i - 1] = keep;

        int j = 0;
        while(b[j] != '\0')
                {
                        j++;
                }
        int keeper;
        keeper = b[0];
        up_move_list(b);
        b[j - 1] = keeper;
        puts("rr");
}

int    rra(int *a)
{
    int d;

    d = a[0];
    ft_memmove(a +1, a, sizeof(a));
    a[0] = d;
    write(1, "rra\n", 4);
	return *a;
}

int rrb(int *a)
{
        int yedek;
        int i;
                while(a[i] != '\0')
                {
                        i++;
                }
        yedek = a[i - 1];
        a[i - 1] = '\0';
        down_move_list(a);
        a[0] = yedek;
		write(1, "rrb\n", 4);
        return (*a);		
}

void rrr(int *a, int *b)
{
        int yedek;
        int i;
                while(a[i] != '\0')
                {
                        i++;
                }
        yedek = a[i - 1];
        a[i - 1] = '\0';
        down_move_list(a);
        a[0] = yedek;
		i = 0;
        while(a[i] != '\0')
        {
            i++;
        }
        yedek = a[i - 1];
        a[i - 1] = '\0';
        down_move_list(a);
        a[0] = yedek;
}