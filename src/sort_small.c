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

// static void sort_five(t_stacks *stack)
// {
    //while(numero->next != NULL)
    // {
    //     //se index for o maior, menor ou segundo menor
                // se pb_counter < 2
                    // pb
                    // pb_counter++
            // senao
                // ra
    // }
    // sort_three(stack_a)
    // pa
    // se numero maior
        // ra
    // senao se numero segundo menor
        // sa
// }

void    sort_stack(t_stacks *stack)
{
    if (stack->stack_a.size == 1)
        return;
    if (stack->stack_a.size == 2)
         sort_two(stack);
    if (stack->stack_a.size == 3)
        sort_three(stack);
    // if (stack->stack_a.size > 3 && stack->stack_a.size <= 5)
    //      sort_five(stack);  
}