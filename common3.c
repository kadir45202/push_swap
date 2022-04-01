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

int *rra(int *a)
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
        return (a);
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