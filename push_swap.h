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
	int b_size;
	int a_size;
} t_list;

void b_up_move_list(t_list list);
void a_up_move_list(t_list list);
void a_down_move_list(t_list list);
void b_down_move_list(t_list list);

void sa(t_list list);
void sb(t_list list);
void ss(t_list list);
void pa(t_list list);
void pp(t_list list);
void ra(t_list list);
void rb(t_list list);
void rr(t_list list);
void rra(t_list list);
void rrb(t_list list);
void rrr(t_list list);
#endif