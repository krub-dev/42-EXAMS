#include <unistd.h>

int	is_sp(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return(0);
}

int	main(int argc, char **argv)
{	
	int i = 0;
	int j = 0;
	char	buff[300];

	while (i <= 300)
		buff[i++] = '\0';
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (j <= 300)
				buff[j++] = '\0';
			while (is_sp(argv[1][i]))
				i++;
			j = 0;
			while (!is_sp(argv[1][i]) && argv[1][i] != '\0')
			{
				buff[j] = argv[1][i];
				j++;
				i++;
			}
			while (is_sp(argv[1][i]))
				i++;
		}
		i = 0;
		while (buff[i] != '\0')
		{
			write(1, &buff[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
