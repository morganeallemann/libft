#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *line_after_return(char *stash)
{
	char	*new_line;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!stash)
		return (NULL);
	while (stash[i] != '\0' && stash[i] != '\n')
		i++;
	new_line = malloc(sizeof(char *) * (ft_strlen(stash) - i + 1));
	if (!new_line)
		return (NULL);
	i += 1;
	while (stash[i] != '\0')
	{
		new_line[j] = stash[i];
		i++;
		j++;
	}
	new_line[j] = '\0';
	free(stash);
	return (new_line);
}

char *line_with_return(char *stash)
{
	char	*final_line;
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (!stash)
		return (NULL);
	while (stash[len] != '\0' && stash[len] != '\n')
		len++;
	final_line = malloc(sizeof(char *) * len + 1);
	if (!final_line)
		return (NULL);
	while (stash[i] != '\0' && stash[i] != '\n')
	{
		if (stash[i] == '\n')
		{	
			i++;
			break;
		}
		final_line[i] = stash[i];
		i++;
	}
	final_line[i] = '\0';
	return (final_line);
}

char *read_the_line(int fd, char* stash)
{
	char	*buff;
	int	nb_bytes;

	buff = malloc(sizeof(char *) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	nb_bytes = 1;
	while (nb_bytes > 0 && !ft_strchr(stash, '\n'))
	{
		nb_bytes = read(fd, buff, BUFFER_SIZE);
		if (nb_bytes < 0)
		{
			free(buff);
			return (NULL);
		}
		buff[nb_bytes] = '\0';
		stash = ft_strjoin(stash, buff);
	}
	free(buff);
	return (stash);
}

char *get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	stash = read_the_line(fd, stash);
	if (!stash)
		return (NULL);
	line = line_with_return(stash);
	stash = line_after_return(stash);
	return (line);
}
		
