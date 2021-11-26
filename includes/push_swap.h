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
    t_node  *head;
    int size;
}t_stack;

typedef struct s_stacks
{
    t_stack  stack_a;
    t_stack  stack_b;
}t_stacks;

#endif