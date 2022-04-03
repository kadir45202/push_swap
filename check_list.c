#include "push_swap.h"

int a_list_lenght(int *a)
{
        int i;

        i = 0;
        while(a[i] != '\0' && a[i])
                {
                        i++;
                }
           return i;     
}

int b_list_lenght(int *b)
{
        int i;

        i = 0;
        while(b[i] != '\0' && b[i])
                {
                        i++;
                }
           return i;     
}
