#include "push_swap.h"

int     find_almost(t_stack *a)
{
	int k[4];

	k[0] = 0;
	k[3] = a->top;
	rev_arr(a->almost, k[3] * k[3]);
	while (k[0] < k[3])
	{
		k[1] = 0;
		k[2] = 0;
		while (k[1] < k[3])
		{
			if (a->almost[k[0]*k[3] + k[1]] == a->s[k[1]])
				k[2]++;
			k[1]++;
		}
		if (k[2] == k[3])
			return (1);
		k[0]++;
	}
	return (-1);
}

