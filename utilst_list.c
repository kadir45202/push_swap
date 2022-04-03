#include "push_swap.h"

int down_move_list(int *list)
{
        int i = 0;
        while(list[i] != '\0')
                {
                        i++;
                }
        i -= 1;
        while(i >= 0)
                {
                        list[i + 1] = list[i]; 
                        i--;
                }
        return (*list);
}

int up_move_list(int *list)
{
        int i = 0;
        while(list[i] != '\0')
                {
                        list[i] = list[i + 1];
                        i++;
                }
        return (*list);
}