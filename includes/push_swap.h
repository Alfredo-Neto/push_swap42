#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_node 
{
    int data;
    struct s_node *next;
}t_node;

typedef struct s_stack
{
    t_node *stack_a;
    t_node *stack_b;
}t_stack;

#endif