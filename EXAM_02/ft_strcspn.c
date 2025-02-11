#include <stddef.h>
//#include <stdio.h>
//#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len_s = 0;
	size_t	len_r = 0;
	size_t	len_return = 0;
	
	while(reject[len_r] != '\0')
	{
		while(s[len_s] != '\0')
		{	
			if (s[len_s] == reject[len_r])
				len_return++;
			len_s++;
		}
		len_r++;
	}
	return(len_return);
}
/*
int main()
{
	size_t	result = 0;
	size_t	result2 = 0;

	result = ft_strcspn("HOLA", "OA");
	printf("Result propia: %zu\n", result);
	result2 = strcspn("HOLA", "OA");
	printf("Result original: %zu\n", result2);
	return (0);
}*/
