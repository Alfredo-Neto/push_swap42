#include "../includes/push_swap.h"

int main(int argc, char const **argv)
{
    char *stack;
    int i;
    int j;

    i = 0;
    j = 1;
    stack = (char *)malloc((strlen(*argv) - 1) * sizeof(char));
    if (argc > 1)    
    {
        while (*argv)
        {
            if(j > 1)
                stack[i++] = **argv;
            argv++;
            j++;
        }
        while (*stack)
        {
            printf("%c ", *stack);
            stack++;
        }
        printf("\n");
    }
    else
        puts("Número inválido de argumentos!");
    return 0;
}
