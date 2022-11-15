/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:43:55 by malleman          #+#    #+#             */
/*   Updated: 2022/11/10 14:56:03 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static size_t	ft_len_words(char const *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
			len++;
			i++;
	}
	return (len);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			count++;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

static char	**ft_free(char **strs, size_t j)
{
	while (j >= 0 && strs[j] != NULL)
	{
		free(strs[j]);
		strs[j] = NULL;
		j--;
	}
	free(strs);
	strs = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**spliter;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (s == 0)
		return (NULL);
	spliter = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (spliter == NULL)
		return (NULL);
	while (j < ft_count_words(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		len = ft_len_words(s, c, i);
		spliter[j] = ft_substr(&s[i], 0, len);
		if (!spliter[j])
			return (ft_free(spliter, j));
		i = len + i;
		j++;
	}
	spliter[j] = 0;
	return (spliter);
}
