#include "push_swap.h"

int ft_error(int argc)
{
        if(argc == 1)
        {
                return 0;
        }
        return 1;
}

void	insertion(int array[], int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < i + 1)
		{
			if (array[j] > array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
}