#include "../includes/push_swap.h"

int *array_cpy(int const *src, size_t len)
{
   int *dest = malloc(len * sizeof(int));
   ft_memcpy(dest, src, len * sizeof(int));
   return (dest);
}

int main(void)
{
    int i = 0;
    int meu_arr[] = {1, 2, 3, 4, 5};

    int *resultado = array_cpy(meu_arr, (sizeof(meu_arr) / sizeof(meu_arr[0])));
    while (resultado[i])
    {
        printf("%d ", resultado[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}
