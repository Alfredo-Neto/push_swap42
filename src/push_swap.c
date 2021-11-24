#include "../includes/push_swap.h"

void append_to_list(t_node *head, t_node *prev_node)
{
	t_node *new_node;

	new_node = head;
	while (new_node->next != NULL)
		new_node = new_node->next;
	new_node->next = prev_node;
}

void print_list(t_node *head)
{
	t_node *node;

	node = head;
	while (node->next != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	printf("%d \n", node->data);
}

t_node *new_node(t_node *n, int data)
{
	n = (t_node *)malloc(sizeof(t_node));
	n->data = data;
	n->next = NULL;
	return (n);
}

int main(int argc, char **argv)
{
	t_node *head;
	t_node *node;

	node = NULL;
	head = NULL;
	if (argc >= 2)
	{
		node = new_node(node, ft_atoi(argv[1]));
		head = node;
		argv += 2;
		while (*argv)
		{
			node = new_node(node, ft_atoi(*argv));
			append_to_list(head, node);
			argv++;
		}
		print_list(head);
	}
	else
		printf("Poucos argumentos para a execução do programa!");
	return (0);
}
