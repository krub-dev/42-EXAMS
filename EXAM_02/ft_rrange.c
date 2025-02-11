#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int	range = 0;
	
	if (start > end)
		range = start - end;
	else
		range = end - start;
	range++;
	int *array;
	array = (int *)malloc(range  * sizeof(int));
	
	while (range > i)
	{
		array[i] = end;
		i++;
		end--;
	}
	/*i = 0;
	while (range > i)
	{
		printf("%d\n", array[i]);
		i++;
	}*/
	return (array);
}
/*
int	main(void)
{
	ft_rrange(1, 3);
	return (0);
}*/
