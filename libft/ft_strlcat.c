/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:21:59 by malleman          #+#    #+#             */
/*   Updated: 2022/10/27 14:48:40 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	count;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	count = i;
	if (dstsize <= count)
		return (dstsize + count);
	while (count + 1 < dstsize && src[j] != '\0')
	{
		dst[count] = src[j];
		count++;
		j++;
	}
	dst[count] = '\0';
	while (src[j] != '\0')
		j++;
	return (j + count);
}
/*
int main()
{
        char x[] = "Hello";
        char y[] = "Salut";
        printf("%zu\n", ft_strlcat(x, y, 4));
        return(0);
}
*/
