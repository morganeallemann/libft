#include"libft.h"

static	int	len_nb(int n)
{
	int len;
	
	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	result;
	int	i;

	i = len_nb(n);
	result = (char)malloc(sizeof(char *) * i + 1);
	if (result == NULL)
		return (NULL);
	str[i++] = '\0';
	if (n == 0)
		str[0] = '0';
		return (str);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
