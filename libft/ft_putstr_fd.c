void	ft_putstr_fd(char *s, int fd)
{
	int i,

	i = 0;
	while(s[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}
