/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:13:04 by ade-agui          #+#    #+#             */
/*   Updated: 2021/12/13 02:34:19 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node *new_node(int data, int index)
{
	t_node *n;

	n = (t_node *)malloc(sizeof(t_node));
	n->data = data;
	n->index = index;
	n->next = NULL;
	return (n);
}

void push_to_stack(t_node **stack, t_node *new_node)
{
	new_node->next = *stack;
	*stack = new_node;
}

void print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node_a;
	t_node	*node_b;
	int		diff;

	if (!stack_b->head)
	{
		print_stack_a(stack_a);
		printf("-----	");
		printf("-----\n");
		printf("A	B\n");
		return ;
	}
	else if (!stack_a->head)
	{
		print_stack_b(stack_b);
		printf("-----	");
		printf("-----\n");
		printf("A	B\n");
		return ;
	}
	diff = stack_size(*stack_a) - stack_size(*stack_b);
	node_a = stack_a->head;
	node_b = stack_b->head;
	while (node_a->next != NULL)
	{
		if (diff < 0)
		{
			printf("	");
			diff++;
		}
		else
		{
			printf("%d	", node_a->data);
			node_a = node_a->next;	
		}
		if (node_b->next != NULL)
		{
			if (diff > 0)
			{
				printf("\n");
				diff--;
			}
			else
			{
				printf("%d\n", node_b->data);
				node_b = node_b->next;
			}
		}
		else
			printf("%d\n", node_b->data);
	}
	printf("%d	", node_a->data);
	printf("%d\n", node_b->data);
	printf("-----	");
	printf("-----\n");
	printf("A	B\n");
}

void print_stack_a(t_stack *stack)
{
	while (stack->head->next != NULL)
	{
		printf("%d\n", stack->head->data);
		stack->head = stack->head->next;
	}
	printf("%d\n", stack->head->data);
}

void print_stack_b(t_stack *stack)
{
	while (stack->head->next != NULL)
	{
		printf("	%d\n", stack->head->data);
		stack->head = stack->head->next;
	}
	printf("	%d\n", stack->head->data);
}

t_node *get_bottom_element(t_node *stack)
{
	if (stack == NULL)
		return (0);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

int stack_size(t_stack stack)
{
	stack.size = 0;
	while (stack.head->next != NULL)
	{
		stack.size++;
		stack.head = stack.head->next;
	}
	stack.size++;
	return (stack.size);
}

int get_stack_size(t_stacks *stacks)
{
	t_node *temp = NULL;
	int size;

	size = stacks->stack_a.size;
	temp = stacks->stack_a.head;
	while (temp->next != NULL)
	{
		size++;
		temp = temp->next;
	}
	size++;
	return (size);
}

void	append_to_stack(t_node **stack, t_node *new)
{
	t_node	*last;

	last = get_bottom_element(*stack);
	if (last != NULL)
		last->next = new;
	else
		*stack = new;
}