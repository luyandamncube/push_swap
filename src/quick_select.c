#include "push_swap.h"

int     partition(int *arr, int l, int r)
{
    int x;
    int j;
    int i;

    j = l;
    x = arr[r];
    i = l;
    while (j < r)
    {
        if (arr[j] <= x) 
        {
            ft_arrswap(arr, i, j);
            i++;
        }
        j++;
    }
    ft_arrswap(arr, i, r);
    return i;
}

int     quick_select(int *arr, int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1) 
    {
        int index = partition(arr, l, r);
        if (index - l == k - 1)
            return arr[index];
        if (index - l > k - 1) 
            return (quick_select(arr, l, index - 1, k));
        return (quick_select(arr, index + 1, r, k - index + l - 1));
    }
    return (2147483647LL);
}