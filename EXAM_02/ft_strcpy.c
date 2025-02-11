char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int	j = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		s1[j] = s2[j];
		j++;
	}

	return (s1);
}
