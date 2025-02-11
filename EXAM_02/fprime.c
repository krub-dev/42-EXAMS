#include <stdio.h>

int atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
int	main(int argc, char **argv)
{

	int x = 0;
	int nbr = 0;
	int prime = 1;

	if (argc == 2)
	{
		while (argv[1][x])
		{
			if (argv[1][x] == '-')
			{
				printf("\n");
				return (0);
			}
			x++;
		}
		x = 0;
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("1");
	while (nbr >= prime)
	{
		prime++;
		if (nbr % prime == 0)
		{
			printf("%d", prime);
			if (nbr == prime)
				break ;
			printf("*");
			nbr = nbr / prime;
			prime = 1;
		}
	}
		
	}
	printf("\n");
	return (0);
}
