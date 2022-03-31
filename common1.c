#include "push_swap.h"
#include <unistd.h>

void sa(int *a)
{
        int c;
        if(a[1] != '\0' && a[1])
        {
        c = a[0];
        a[0] = a[1];
        a[1] = c;
        }
       write(1, "sa\n", 3);
}

void sb(int *b)
{
        int c;
        if(b[1] != '\0' && b[1])
        {
        c = b[0];
        b[0] = b[1];
        b[1] = c;
        }
        write(1, "sb\n", 3);
}

void ss(int *a, int*b)
{
        int c;
        if(b[1] != '\0' && b[1])
        {
        c = b[0];
        b[0] = b[1];
        b[1] = c;
        }
        if(a[1] != '\0' && a[1])
        {
        c = a[0];
        a[0] = a[1];
        a[1] = c;
        }
}
