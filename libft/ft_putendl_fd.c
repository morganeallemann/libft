void	ft_putendl_fd(char *s, int fd)
{
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, '\n', 1);
}
