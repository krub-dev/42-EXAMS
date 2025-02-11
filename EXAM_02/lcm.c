#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int nbr = 1;

	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if (nbr % a == 0 && nbr % b == 0)
			return (nbr);
		nbr++;
	}
}
/*
int	main(void)
{	
	int mcm = 0;
	mcm = lcm(5, 10);
	printf("lcm es: %d\n", mcm);
	
	return (0);
}*/

