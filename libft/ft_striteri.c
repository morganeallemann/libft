void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while(s[i])
	{
		s[i] = f(i, &s[i]);
		i++;
	}
}