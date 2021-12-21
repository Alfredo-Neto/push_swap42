#include "../includes/push_swap.h"

static int *array_cpy(int const *src, size_t len)
{
   int *dest = malloc(len * sizeof(int));
   ft_memcpy(dest, src, len * sizeof(int));
   return (dest);
}

static int *get_array_indexes(int *cpy_index, int size)
{
    int i;
    int j;
    int *index;

    i = 0;
    index = array_cpy(cpy_index, size);
    quick_sort(index, size);
    while (i < size)
    {
        j = 0;
        while (cpy_index[i] != index[j])
            j++;
        cpy_index[i] = j;
        i++;
    }
    return (cpy_index);
}

int *return_array_of_indexes(int argc, char **argv)
{
    int *copy;
    int *result;

    copy = array_cpy(*argv, argc);
    result = get_array_indexes(copy, argc);
    return (result);
}
