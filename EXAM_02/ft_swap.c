#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
//	printf("a: %d / b: %d\n", *a, *b);
}
/*
int	main(void)
{
	int	a = 4; 
	int b = 2;
	printf("a: %d / b: %d\n", a, b);
	ft_swap(&a, &b);
	return (0);
}*/
