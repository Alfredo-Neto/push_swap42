#include "../includes/push_swap.h"

int main(int argc, char const **argv)
{
    char *stack;
    
    stack = (char *)malloc((strlen(*argv) - 1) * sizeof(char));
    if (argc > 1)    
    {
        while (*argv)
        {
            ft_strlcpy(stack, *argv, sizeof(stack));
            argv++;
            printf("%c", *stack);
        }
    }
    else
        puts("Número inválido de argumentos!");
    return 0;
}
