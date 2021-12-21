#include "../includes/push_swap.h"

int *parse_args(char **argv)
{
    int i;
    int *parsed_args;

    parsed_args = NULL;
	i = 0;
    while (argv[i])
    {
        parsed_args[i] = ft_atoi(argv[i]);
        i++;
    }
    return (parsed_args);
}