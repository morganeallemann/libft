/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:40:38 by malleman          #+#    #+#             */
/*   Updated: 2022/11/16 17:01:49 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_len_hexa_u(unsigned int ptr)
{
	int	len_hex;

	len_hex = 0;
	while (ptr > 0)
	{
		len_hex++;
		ptr = ptr / 16;
	}
	return (len_hex);
}

void	ft_hexa_conv(unsigned int n, const char c)
{
	 if (n >= 16)
	{
		ft_hexa_conv(n / 16, c);
		ft_hexa_conv(n % 16, c);
	}
	else 
	{
		if (n < 10)
			ft_putchar_fd((n + 48), 1);
		else
		{
			if (c == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (c == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}	

int	ft_print_hexa_conv(unsigned int n, const char c)
{
	if (n == 0)
		write(1, "0", 1);	
	else 
		ft_hexa_conv(n, c);
	return (ft_len_hexa_u(n));
}
