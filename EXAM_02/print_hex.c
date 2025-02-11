#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res= 0;
	int	i = 0;

	while (s[i])
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return res;
}

void	ft_print_hex(int n)
{
	//char buff[16];
	
	//buff = "0123456789abcdef";
	if (n > 16)
		ft_print_hex(n / 16);
	//write(1, &buff[n % 16], 1);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
