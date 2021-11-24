#include "../includes/push_swap.h"

t_node *new_node(t_node *n, int data)
{
	n = (t_node *)malloc(sizeof(t_node));
	n->data = data;
	n->next = NULL;
	return (n);
}

void push(t_node **head, t_node *new_node)
{
	new_node->next = *head;
	*head = new_node;
}

void print_list(t_node *head)
{
	t_node *node;

	node = head;
	while (node->next != NULL)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
	printf("%d\n", node->data);
}

int main(int argc, char **argv)
{
	t_node *head;
	t_node *node;
	int i;

	i = 0;
	node = NULL;
	head = NULL;
	if (argc >= 2)
	{
		while (argv[i])
			i++;
		i--;
		while (argv[i])
		{
			node = new_node(node, ft_atoi(argv[i]));
			push(&head, node);
			if (i == 1)
				break ;
			i--;
		}
		print_list(head);

	}
	else
	{
		ft_putstr_fd("Error:\n", 1);
		ft_putstr_fd("	Too few arguments provided!", 1);
	}
	return (0);
}
