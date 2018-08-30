#include "push_swap.h"

void    rev_arr(int *arr, int len)
{
	int k;
	int m;
	int     temp;
	k = len - 1;
	m = 0;
	while(k > m)
	{
		temp = arr[k];
		arr[k] = arr[m];
		arr[m] = temp;
		k--;
		m++;
	}
}

