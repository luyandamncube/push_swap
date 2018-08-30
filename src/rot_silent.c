#include "push_swap.h"

void	rot_silent(int *arr, int n)
{
	int	temp;
	int	k;

	temp = arr[0];
	k = 0;
	
	while (k < n - 1)
	{
		arr[k] = arr[k + 1];
		k++;
	}
	arr[k] = temp;
}
