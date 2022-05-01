#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct list{
	int *a;
	int *b;
	int *c;
	int b_size;
	int a_size;
	int keep;
} t_list;

void b_up_move_list(t_list *list);
void a_up_move_list(t_list *list);
void a_down_move_list(t_list *list);
void b_down_move_list(t_list *list);
void insertion(int array[],int size, t_list *list);
int ft_error(int argc);
void quickSort(int first,int last, t_list *list);
void shellSort(t_list *list);
int	ft_atoi(const char *str);
void ft_free(t_list *list);
void atma(t_list *list);
void ft_malloc(t_list *list);
void yazdir(t_list *list);
void	*ft_memcpy(void *dst, const void *src, size_t n);

void sa(t_list *list);
void sb(t_list *list);
void ss(t_list *list);
void pa(t_list *list);
void pb(t_list *list);
void ra(t_list *list);
void rb(t_list *list);
void rr(t_list *list);
void rra(t_list *list);
void rrb(t_list *list);
void rrr(t_list *list);
#endif