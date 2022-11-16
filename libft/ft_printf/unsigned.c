/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:46:36 by malleman          #+#    #+#             */
/*   Updated: 2022/11/16 17:45:38 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static	int	len_nb_u(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char		*result;
	long int	i;
	long int	nb;

	i = len_nb_u(n);
	nb = n;
	result = malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	result[i--] = '\0';
	while (nb > 0)
	{
		result[i] = '0' + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (result);
}

int	ft_print_u(unsigned int n)
{
	int		nb_len;
	char	*number;

	number = ft_uitoa(n);
	nb_len = ft_putstr(number);
	free(number);
	return (nb_len);
}
