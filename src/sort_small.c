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
        // 1 - dar dois pb
        // 2 - sort_three(stack_b)
        // 3 - sort_two(stack_a)
        // 4 - pa
        // 5 - verificar na stack_a se o elemento eh: o maior de todos(ra),
        //     o menor de todos(nada), o segundo menor de todos(sa)
        // 6 - executar as acoes correspondentes
        // pa
        // repetir passos 5 e 6 para o ultimo elemento
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