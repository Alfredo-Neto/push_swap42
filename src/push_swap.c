#include "../includes/push_swap.h"

t_node *new_node(int data)
{
	t_node *n;

	n = (t_node *)malloc(sizeof(t_node));
	n->data = data;
	n->next = NULL;
	return (n);
}

void push_to_stack(t_node **stack, t_node *new_node)
{
	new_node->next = *stack;
	*stack = new_node;
}

void print_stack(t_node *stack)
{
	t_node *node;

	node = stack;
	while (node->next != NULL)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
	printf("%d\n", node->data);
}

t_node *get_bottom_element(t_node *stack)
{
	if (stack == NULL)
		return (0);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
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

void rotate(t_node **stack)
{
	t_node *temp;
	
	temp = *stack;
	*stack = (*stack)->next;
	append_to_stack(&(*stack), temp);
	temp->next = NULL;
}

void reverse_rotate(t_node **stack)
{
	t_node *last;
	t_node *temp;

	temp = *stack;
	last = get_bottom_element(temp);
	while (temp->next != NULL)
	{
		if (temp->next->next == NULL)
			temp->next = NULL;
		else
			temp = temp->next;
	}
	push_to_stack(stack, last);
}

void swap(t_node **stack)
{
	t_node *temp;

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void push(t_stack *stack_a, t_stack *stack_b)
{
	t_node *temp;

	temp = stack_a->head;
	stack_a->head = stack_a->head->next;
	push_to_stack(&stack_b->head, temp);
}

int main(int argc, char **argv)
{
	t_stacks	stacks;
	// t_stack	*stack_b = NULL;
	t_node	*node = NULL;
	// stack_a.head = NULL;
	int i;

	i = 0;

	// Se está ordenada
	// Se existem duplicatas
	// limpar a stack
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
		// reverse_rotate(&stacks.stack_a.head);
		print_stack(stacks.stack_a.head);
		// push(stack_a, stack_b);
		// print_stack(stack_a->head);
		// puts("\n");
		// print_stack(stack_b->head);
	}
	else
	{
		ft_putstr_fd("Error:\n", 1);
		ft_putstr_fd("	Too few arguments provided!", 1);
	}
	return (0);
}
