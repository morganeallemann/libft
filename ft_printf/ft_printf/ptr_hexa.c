/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:55:32 by malleman          #+#    #+#             */
/*   Updated: 2022/11/16 17:40:55 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_len_hexa(long int ptr)
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

void	ft_hexa_str(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_hexa_str(ptr / 16);
		ft_hexa_str(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar_i(ptr + 48);
		else
			ft_putchar_i((ptr - 10) + 'a');
	}
}	

int	ft_print_hex_ptr(unsigned long long ptr)
{
	int		print_ptr;

	print_ptr = write(1, "0x", 2);
	if (ptr == 0)
		print_ptr = write(1, "0", 1);
	else 
	{	ft_hexa_str(ptr);
		print_ptr += ft_len_hexa(ptr);
	}
	return (print_ptr);
}
