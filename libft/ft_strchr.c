#include"libft.h"

char	*strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0' || s[i] != c)
		i++;
	if (i == c)
		return (str[i]);
	else
		return (NULL);
}
