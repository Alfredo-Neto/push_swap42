#include "../includes/push_swap.h"

static void    sort_two(t_stacks *stack)
{
    int first;
    int second;

    first = stack->stack_a.head->data;
    second = stack->stack_a.head->next->data;
    if (first > second)
        do_print_sa(stack);
    else
        return ;
    return ;
}

static void    sort_three(t_stacks *stack)
{
    int first;
    int second;
    int third;

    first = stack->stack_a.head->data;
    second = stack->stack_a.head->next->data;
    third = stack->stack_a.head->next->next->data;

	if (first > second && second > third && first > third)
	{
		do_print_sa(stack);
		do_print_rra(stack);
	}
	else if (first < second && second > third && first < third)
	{
		do_print_rra(stack);
		do_print_sa(stack);
	}
	else if (first > second && second < third && first < third)
		do_print_sa(stack);
	else if (first < second && second > third && first > third)
		do_print_rra(stack);
	else if (first > second && second < third && first > third)
		do_print_ra(stack);
    else if (first < second && second < third)
        return ;
}

static void sort_five(t_stacks *stacks)
{
    t_node *temp;
    int pb_counter;

    pb_counter = 0;
    temp = stacks->stack_a.head;
    while(temp->next != NULL)
    {
        if (temp->index == stacks->stack_a.max || temp->index == 0 || temp->index == 1)
        {
            if (pb_counter < 2)
            {
                do_print_pb(stacks);
                pb_counter++;
            }
        }
        else
            do_print_ra(stacks);
        temp = temp->next;
    }
    sort_three(stacks);
    do_print_pa(stacks);
    if (temp->index == stacks->stack_a.max)
        do_print_ra(stacks);
    else if (temp->index == 1)
        do_print_sa(stacks);
}

void    sort_stack(t_stacks *stack)
{
    if (stack->stack_a.size == 1)
        return;
    if (stack->stack_a.size == 2)
         sort_two(stack);
    if (stack->stack_a.size == 3)
        sort_three(stack);
    if (stack->stack_a.size > 3 && stack->stack_a.size <= 5)
         sort_five(stack);  
}