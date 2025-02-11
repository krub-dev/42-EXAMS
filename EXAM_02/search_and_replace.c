#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int check = 0;
	if (argc == 4)
	{
		while (argv[2][j] != '\0')
			j++;
		while (argv[3][k] != '\0')
			k++;
		if (j + k == 2)
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
				{
					argv[1][i] = argv[3][0];
					check = 1;
				}
				i++;
			}
			i = 0;
			if (check == 1)
			{
				while (argv[1][i] != '\0')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
			}
			else
			{	
				while (argv[1][i] != '\0')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
