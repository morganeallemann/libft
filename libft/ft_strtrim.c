#include"libft.h"

int	ft_find_set(char c, char const s*)
{
	int i;

	i = 0;
	while (s[i]))
	{
		if (c == s[i])
			return(1);
		i++;
	}
}
	
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len_s1;
	int	len_strim;
	char	*strim;

	if (s1 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	i = 0;
	j = len_s1;
	while (ft_find_set(s1[i], set))
		i++;
	while (ft_find_set(s1[j], set || j > 0))
		j--;
	len_strim = (len_s1 - j) - (len_s1 - i) + 2;
	if (len_strim < 0)
		len_strim = 1;
	strim = malloc(sizeof(char *) * len_strim);
	if (strim == NULL)
		return (NULL);
	ft_strlcpy(strim, &s1[i], len_strim);
	return (strim);
}
