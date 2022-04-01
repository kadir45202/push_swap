#include "push_swap.h"

void pa(int *a, int *b)
{
        if(sizeof(a) > 1)
        {
                if(sizeof(b) > 1)
                {
                down_move_list(a);
                a[0] = b[0];
                up_move_list(b);
                }
        }
        puts("pa");
}

void pb(int *a, int *b)
{
        if(sizeof(a) > 1)
        {
                if(sizeof(b) > 1)
                {
                down_move_list(b);
                b[0] = a[0];
                up_move_list(a);
                }
        }
        puts("pb");
}

void ra(int *a)
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
        puts("ra");
}

void rb(int *a)
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
        puts("rb");
}