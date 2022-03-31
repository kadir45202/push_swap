#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>

void sa(int *a);
void sb(int *b);
void ss(int *a, int*b);
void pa(int *a, int *b);
void pb(int *a, int *b);
void ra(int *a);
void rb(int *b);
void rr(int *a, int *b);
void rra(int *a);
void rrb(int *b);
void rrr(int *a, int *b);
int  a_list_lenght(int *a);
int  b_list_lenght(int *b);
void *ft_memmove(void *dst, const void *src, size_t len);
int find_big(int *a);
int ft_atoi(char *str);

# endif