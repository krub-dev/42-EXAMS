#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i = 0;
	int	flag = 0;
	int flag2 = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			flag = 0;
			flag2 = 0;
			while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i + 1] != '\0')
			{
				if (i == 0)
					flag2 = 1;
				flag = 1;
				i++;
			}
			if (flag == 1 && flag2 == 0)
				write (1, " ", 1);
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write (1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

