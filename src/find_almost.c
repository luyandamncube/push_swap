#include "push_swap.h"

int     find_almost(t_stack *a)
{
	int k[6];

	k[0] = -1;
	k[2] = 0;
	k[3] = a->top;
	k[4] = k[3] * k[3] - k[3];
	while (++k[0] < k[4])
	{
		if (a->almost[k[0]] == a->s[k[2]])
		{
			k[1] = -1;
			while (++k[1] < k[3])
			{
				if (a->almost[k[0] + k[1]] == a->s[k[1]])
				{
					k[3]--;
					if (k[3] == 0)
						return (k[0]);
				}
			}
		}
	}
	return (-1);
}
