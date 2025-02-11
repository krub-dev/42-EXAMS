#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' );
}

char *ft_strncpy(char *s2, const char *s1, int n)
{
	int i = 0;
	while (s1[i] && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	//printf("s2: %s\n", s2);
	return(s2);
}

char **ft_split(char *str)
{
	char	**res;
	int	wc = 0;
	int	i = 0;
	int j = 0;
	int	k = 0;

	while(str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
			wc++;
		while (str[i] && !is_space(str[i]))
			i++;
	}
	i = 0;
	res = malloc(sizeof(char *) * (wc + 1));
	while(str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		j = i;
		while (str[i] && !is_space(str[i]))
			i++;
		if (i > j)
		{
			res[k] = malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(res[k], &str[j], (i - j));
			k++;
		}

	}
	res[k] = NULL;
	return (res);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	//char dst[50];
	if (argc == 2)
	{	
		char **res;
		res = ft_split(argv[1]);
		while (res[i] != NULL)
			i++;
		i--;
		while (i >= 0)
		{
			j = 0;
			while (res[i][j] != '\0')
				write(1, &res[i][j++], 1);
			if (i != 0)
				write(1, " ", 1);
			i--;
		}
		/*char *src = argv[1];
		while (src[i])
			i++;
		ft_strncpy(dst, src, i);*/
	}
	write (1, "\n", 1);
	return (0);
}

