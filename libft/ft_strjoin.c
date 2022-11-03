#include"libft.h"
#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t j;

	i = 0;
	j = 0;
	len = strlen(s1) + strlen(s2);
	str = malloc(sizeof(char *) * len + 1);
	if (str == NULL)
		return (NULL);
	if (s1 || s2)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
int main()
{
        char const x[] = "Hello";
        char const y[] = "Salut";
        printf("%s\n", ft_strjoin(x, y));
        return(0);
}
