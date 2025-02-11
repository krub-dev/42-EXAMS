#include <stdio.h>
#include <stdlib.h>

int is_sp(char c)
{

	/*	if (c == ' ' || c == '\t' || c == '\n')
		return (1)
	return(0);
	*/
	return((c == ' ' || c == '\t' || c == '\n'));
}

int	wcount(char *str)
{
	int i = 0;
	int wc = 0;
	while (str[i] != '\0')
	{
		while (str[i] && is_sp(str[i]))
			i++;
		if (!is_sp(str[i]) && str[i] != '\0')
		{
			wc++;
		}
		while(str[i] && !is_sp(str[i]))
			i++;
	}
	//printf("%d\n", wc);
	return(wc);
}

char    **ft_split(char *str)
{
	int wc = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char **split = NULL;

	wc = wcount(str);
	split = malloc((wc + 1) * sizeof(char *));

	while (j < wc)
	{
		split[j] = malloc(250);
		while (k <= 250)
			split[j][k++] = '\0';
		k = 0;
		while (str[i] && is_sp(str[i]))
			i++;
		while (str[i] && !is_sp(str[i]))
		{
			split[j][k] = str[i];
			i++;
			k++;
		}
		while (str[i] && is_sp(str[i]))
			i++;
		split[j][k] = '\0';
		j++;
	}
	//j = 0;
/*	while (j < wc)
	{
		printf("%s ", split[j]);
		j++;
	}*/
	split[wc] = NULL;
	return (split);
}
/*
int	main(void)
{
	char *str = "three words apart";
	ft_split(str);
	return (0);
}*/
