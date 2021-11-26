#include "../includes/push_swap.h"

t_node *new_node(int data)
{
	t_node *n;

	n = (t_node *)malloc(sizeof(t_node));
	n->data = data;
	n->next = NULL;
	return (n);
}

void push(t_node **stack, t_node *new_node)
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

t_node *reverse_rotate(t_node **stack)
{

	// stack(top) => 1 -> 2 -> 3 -> 4 -> 5 => NULL(bottom)]
	// temp -> 5
	
}

int main(int argc, char **argv)
{
	t_node *stack = NULL;
	t_node *node = NULL;
	int i;

	i = 0;

	// Se está ordenada
	// Se existem duplicatas
	if (argc >= 2)
	{
		while (argv[i])
			i++;
		while (argv[--i])
		{
			node = new_node(ft_atoi(argv[i]));
			push(&stack, node);
			if (i == 1)
				break ;
		}
		// print_stack(stack);
		rotate(&stack);
		print_stack(stack);
	}
	else
	{
		ft_putstr_fd("Error:\n", 1);
		ft_putstr_fd("	Too few arguments provided!", 1);
	}
	return (0);
}
