#include "push_swap.h"

int	main(int argc, char **argv)
{
	stack *one; 
	int	k;

	k = 0;
	initialize(&one);	
	
	push(3, one);
	push(6, one);
	push(-1, one);
	push(8, one);
	push(9, one);
	push(1, one);
	
	printf("BEFORE rot\n");	
	dump(one);
	
	printf("AFTER rot \n");	
	rot(one);
	dump(one);
	
	printf("BEFORE rev_rot \n");	
	dump(one);
	
	printf("AFTER rev_rot \n");	
	rev_rot(one);
	dump(one);
	
	printf("BEFORE swap \n");	
	dump(one);

	printf("AFTER swap \n");	
	swap(one);
	dump(one);
	
	printf("FREE\n");	
	free_all(&one);
	//dump(one);

	return (0);
}
