#include "push_swap.h"
#include <unistd.h>
void pa(int *a, int *b)//b yığınının en üstteki ilk elemanını a yığının en üstüne yerleştirir
{
        if(sizeof(a) > 1)
        {
                if(sizeof(b) > 1)
                {
						ft_memmove(a + 1, a, sizeof(a));
						a[0] = b[0];
						ft_memmove(b - 1, b, sizeof(b));
                }
        }
        write(1, "pa\n", 3);
}

void pb(int *a, int *b)
{
        if(a_list_lenght(b) >= 2)
        {
                if(sizeof(a - 1))
                {
                        ft_memmove(a + 1, a, sizeof(a));
                        a[0] = b[0];
                        ft_memmove(b - 1, b, sizeof(b));
                }
        }
        write(1, "pb\n", 3);
}

void ra(int *a)
{
        int i = 0;
        int yedek = a[0];
        ft_memmove(a - 1, a, sizeof(a));
        i = a_list_lenght(a);
        a[i] = yedek;
        write(1, "ra\n", 3);
}

void rb(int *b)
{
        int i = 0;
        int yedek = b[0];
        ft_memmove(b - 1, b, sizeof(b));
        i = b_list_lenght(b);
        b[i] = yedek;
        write(1, "ra\n", 3);
}