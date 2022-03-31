#include "push_swap.h"

void rr(int *a, int *b)
{
        int i = 0;
        int yedek = a[0];
        ft_memmove(a - 1, a, sizeof(a));
        i = a_list_lenght(a);
        a[i] = yedek;
        yedek = b[0];
        i = 0;
        ft_memmove(b - 1, b, sizeof(b));
        i = b_list_lenght(b);
        b[i] = yedek;
        write(1, "rr\n", 3);
}

void rra(int *a)
{
        int yedek;
        int i;
        i = a_list_lenght(a);
        yedek = a[i];
        ft_memmove(a + 1, a, sizeof(a));
        a[0] = yedek;
        write(1, "rra\n", 4);
}

void rrb(int *b)
{
        int yedek;
        int i;
        i = b_list_lenght(b);
        yedek = b[i];
        ft_memmove(b + 1, b, sizeof(b));
        b[0] = yedek;
        write(1, "rrb\n", 4);
}

void rrr(int *a, int *b)
{
        int yedek;
        int i;
        i = a_list_lenght(a);
        yedek = a[i];
        ft_memmove(a + 1, a, sizeof(a));
        a[0] = yedek;
        i = b_list_lenght(b);
        yedek = b[i];
        ft_memmove(b + 1, b, sizeof(b));
        b[0] = yedek;
        write(1, "rrs\n", 4);
}