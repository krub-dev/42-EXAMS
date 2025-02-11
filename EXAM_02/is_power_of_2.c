//#include <stdio.h>
int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while (n / 2 != 1 && n % 2 == 0)
		n = n / 2;
	if (n / 2 == 1)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	unsigned int n = 1;
	int i;
	i = is_power_of_2(n);
	printf("%d\n", i);
	return (0);
}*/
