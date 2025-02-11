#include <unistd.h>
//#include <stdio.h>
int	ft_atoi(const char *str)
{
	int	sign = 1;
	int	nbr = 0;
	int	i = 0;

	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}
/*
int	main (void)
{
	char *str;
	int	nbr;

	str = "   +1232131";
	nbr = ft_atoi(str);
	printf ("nbr es: %d\n", nbr);
	return (0);
}*/
