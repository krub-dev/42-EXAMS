#include <unistd.h>

void fizz(void)
{
	char *str = "fizz";
	int	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void buzz(void)
{
	char *str = "buzz";
	int	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void fizzbuzz(void)
{
	char *str = "fizzbuzz";
	int	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	pc(char c)
{
	write(1, &c, 1);
}

void	putnbr (int nbr)
{
	//char c[10] = "0123456789";
	char x;
	int tmp;
	char str[4];
	tmp = nbr;
	str[3] = '\0';
	int		d = 0;
	if (nbr < 10)
	{
		x = nbr + '0';
		pc(x);
		return ;
	}	
	
	while (tmp % 10 != 0)
	{
		tmp = tmp / 10;
		d++;
	}
	if (d != 0)
		d--;
	while (d >= 0)
	{
		x = (nbr % 10) + '0';
		str[d] = x;
		nbr = nbr / 10;
		d--;
	}
	d = 0;
	while(str[d])
	{
		write(1, &str[d], 1);
		d++;
	}
}

int	main(void)
{
	int	i = 1;
	
	while (i <= 100)
	{
		if (i % 15 == 0)
			fizzbuzz();
		else if (i % 3 == 0)
			fizz();
		else if (i % 5 == 0)
			buzz();
		else
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
