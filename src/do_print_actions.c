/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_print_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:15:36 by ade-agui          #+#    #+#             */
/*   Updated: 2021/11/29 18:51:51 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void do_print_sa(t_stacks *stack)
{
    swap(&stack->stack_a.head);
    write(1, "sa\n", 3);
}

void do_print_sb(t_stacks *stack)
{
    swap(&stack->stack_b.head);
    write(1, "sa\n", 3);
}

void do_print_ss()
{
    
}

void do_print_ra()
{
    
}

void do_print_rb()
{
    
}

void do_print_rr()
{
    
}

void do_print_rra()
{
    
}

void do_print_rrb()
{
    
}

void do_print_rrr()
{
    
}

void do_print_pa()
{
    
}

void do_print_pb()
{
    
}