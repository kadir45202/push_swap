#include "push_swap.h"

int ft_error(int argc)
{
        if(argc == 1)
        {
                return 0;
        }
        return 1;
}

void insertion(int array[],int size, t_list *list)
{
   
    int i,j,temp;
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]>array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
   
    for(i=0;i<size;i++)
	{
        list->c[i] = array[i];   
	}
}