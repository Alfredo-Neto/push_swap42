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


// Push_Swap Actions
void	rotate(t_node **stack);
void	reverse_rotate(t_node **stack);
void	swap(t_node **stack);
void	push_b(t_stack *stack_a, t_stack *stack_b);
void	push_a(t_stack *stack_a, t_stack *stack_b);

// Call and print actions
void	do_print_sa(t_stacks *stack);

// Stack basic operations
t_node	*new_node(int data);
void	push_to_stack(t_node **stack, t_node *new_node);
void	print_stack(t_node *stack);
t_node	*get_bottom_element(t_node *stack);
void	append_to_stack(t_node **stack, t_node *new);


#endif