#include "../includes/push_swap.h"

int *parse_args(int argc, char **argv)
{
    int count;
    int *parsed_args;

    parsed_args = malloc(sizeof(int) * argc);

    count = 1;
    while (count < argc)
    {
        parsed_args[count] = ft_atoi(argv[count]);
        count++;
    }
    return (parsed_args);
}