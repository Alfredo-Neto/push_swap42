#include "../includes/push_swap.h"
static void	swap_pos(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(int *array, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = array[high];
	i = (low - 1);
	j = low;
	while (j <= high - 1)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_pos(&array[i], &array[j]);
		}
		j++;
	}
	swap_pos(&array[i + 1], &array[high]);
	return (i + 1);
}

static void	qsort_internal(int *array, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = partition(array, low, high);
		qsort_internal(array, low, pivot - 1);
		qsort_internal(array, pivot + 1, high);
	}
}

int	*quick_sort(int *array, int size)
{
	qsort_internal(array, 0, size - 1);
	return (array);
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}