#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int *mall;
	int	range = 0;
	int	flag = 0;
	int	i = 0;

	if (start > end)
	{	
		range = (start - end) + 1;
		flag = 0;
	}
	else if (start < end)
	{	
		range = (end - start) + 1;
		flag = 1;
	}
	mall = (int *)malloc(sizeof(int) * range);
	if (flag == 0)
	{
		while (i < range)
		{
			mall[i] = start - i;
			i++;
		}
	}
	else
	{
		while (i < range)
		{
			mall[i] = start + i;
			i++;
		}
	}
	return (mall);
}
/*
int	main(void)
{
	int *arr;
	int		i = 0;
	arr = ft_range(1, 3);
	while (i <= (3 - 1))
	{
		printf("arr = %d\n", arr[i]);
		i++;
	}
		free(arr);
	return(0);
}*/
