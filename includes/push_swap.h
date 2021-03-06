#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_node
{
	int data;
	int index;
	struct s_node *next;
}t_node;

typedef struct s_stack
{
	t_node  *head;
	int		size;
	int		max;
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
void	do_print_sb(t_stacks *stack);
void	do_print_ss(t_stacks *stack);
void	do_print_pa(t_stacks *stack);
void	do_print_pb(t_stacks *stack);
void	do_print_ra(t_stacks *stack);
void	do_print_rb(t_stacks *stack);
void	do_print_rr(t_stacks *stack);
void	do_print_rra(t_stacks *stack);
void	do_print_rrb(t_stacks *stack);
void	do_print_rrr(t_stacks *stack);

// Stack basic operations
t_node	*new_node(int data, int index);
void	push_to_stack(t_node **stack, t_node *new_node);
void	print_stacks(t_stack *stack_a, t_stack *stack_b);
void	print_stack_a(t_stack *stack);
void	print_stack_b(t_stack *stack);
t_node	*get_bottom_element(t_node *stack);
void	append_to_stack(t_node **stack, t_node *new);
int		stack_size(t_stack stack);
int		get_stack_size(t_stacks *stacks);
int		*return_array_of_indexes(int argc, int *argv);
int		*parse_args(int argc, char **argv);

// Sort operations
void	sort_stack(t_stacks *stack);

// sorting algorithms
int		*quick_sort(int *array, int size);


#endif