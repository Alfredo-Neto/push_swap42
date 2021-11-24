#include "../includes/push_swap.h"

void append_to_list(t_node *head, t_node *tmp)
{
	t_node *tmp1;
	tmp1 = head;
	while (tmp1->next != NULL)
		tmp1 = tmp1->next;
	tmp1->next = tmp;
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
		node = new_node(node, atoi(argv[1]));
		head = node;
		argv += 2;
		while (*argv)
		{
			node = new_node(node, atoi(*argv));
			append_to_list(head, node);
			argv++;
		}
		print_list(head);
	}
	else
		printf("Poucos argumentos para a execução do programa!");
	return (0);
}
