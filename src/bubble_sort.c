#include "push_swap.h"

void	bubble_sort(int *arr, int size)
{
	int 	k;
	int	m;

	k = 0;
	while (k < size)
	{
		m = k;
		while (m > 0 )
		{
			if (arr[m] < arr[m - 1])
			{
				ft_arrswap(arr,m-1,m);
			}
			m--;
		}
		k++;
	}
}
