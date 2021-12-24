#include "../includes/push_swap.h"

int *parse_args(int argc, char **argv)
{
    int i;
    int *parsed_args;
    
    parsed_args = malloc(sizeof(int) * argc);
    i = 0;
    while (i < argc)
    {
        parsed_args[i] = ft_atoi(argv[i]);
        i++;
    }
    return (parsed_args);
}