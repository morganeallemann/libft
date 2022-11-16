/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:03:23 by malleman          #+#    #+#             */
/*   Updated: 2022/11/16 14:22:30 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static	int	len_nb(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	long int	i;
	long int	nb;

	i = len_nb(n);
	nb = n;
	result = malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	result[i--] = '\0';
	if (nb == 0)
		result[0] = 48;
	if (nb < 0)
	{
		result[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		result[i] = '0' + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (result);
}
