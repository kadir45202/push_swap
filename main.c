#include "push_swap.h"

int main(int argc, char **argv){

  struct list liste;
	int i = 1;
	liste.a = malloc(argc);
	
	while(argc > 1)
	{
		liste.a[i - 1] = ft_atoi(argv[i]);
		
		i++;
		argc--;
	}
  rra(liste.a, i);
  i = 0;
        while(i < 9)
                {
                        printf("%d\n", liste.a[i]);
                        i++;
                }
  return 0;
}




















/*#include <stdio.h>
#include "push_swap.h"
int main(int argc, char **argv) {

        if(argc <= 2)
                return 0;
        int big;
        int *a = malloc(1000);
        int *b;
        
        ft_memmove(a, argv + 1, sizeof(argv));
        int i = 0;
       while(argv[i] != NULL)
               {
                       a[i] = ft_atoi(argv[i]);
                       i++;
               }
        
        en büyüğünü bul
        listeyi geri aktarırken onu ilk alıcaz
        hepsini int dönüştürüp listeye atıcaz
        
		i = 0;
		int buyuk;
		buyuk = a[0];
		while(a[i] != '\0')
		{
			if(a[i] > buyuk)
			{
				buyuk = a[i];
			}
			i++;
		}
		pb(a, b);

		while(a[0] != '\0')
		{
			if(a[0] > b[0])
			{
				pb(a, b);
			}
			rb(b);
			
		}

        int z = 1;
		ra(a);
		while(a[z] != '\0')
        {
        printf("%d  \n%d", a[z], b[z]);
        z++;
	    argc--;
        }

  return 0;
}
*/