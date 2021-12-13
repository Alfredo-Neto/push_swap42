/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:12:05 by ade-agui          #+#    #+#             */
/*   Updated: 2021/12/13 02:38:37 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_stacks	stacks;
	t_node		*node = NULL;
	int i;

	i = 0;

	// Se está ordenada
	// Se existem duplicatas
	// limpar a stack
	ft_bzero(&stacks, sizeof(t_stacks));
	if (argc >= 2)
	{
		while (argv[i])
			i++;
		while (argv[--i])
		{
			node = new_node(ft_atoi(argv[i]));
			push_to_stack(&stacks.stack_a.head, node);
			if (i == 1)
				break ;
		}
		stacks.stack_a.size = get_stack_size(&stacks);
		// do_print_pb(&stacks);
		// do_print_pb(&stacks);
		// do_print_pb(&stacks);
		// do_print_pb(&stacks);
		// do_print_pb(&stacks);
		// do_print_pb(&stacks);
		
		// do_print_rrr(&stacks);

		sort_stack(&stacks);

		print_stacks(&stacks.stack_a, &stacks.stack_b);

		// print_stack(stack_b->head);
	}
	else
	{
		ft_putstr_fd("Error:\n", 1);
		ft_putstr_fd("	Too few arguments provided!", 1);
	}

	return (0);
}