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

int *down_move_list(int *list)
{
        int i = sizeof(list) - 1;
        while(i >= 0)
                {
                        list[i + 1] = list[i]; 
                        i--;
                }
        return (list);
}

int *up_move_list(int *list)
{
        int i = 0;
        while(list[i] != '\0')
                {
                        list[i] = list[i + 1];
                        i++;
                }
        return (list);
}