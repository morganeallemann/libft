/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:36:23 by malleman          #+#    #+#             */
/*   Updated: 2022/11/16 17:32:30 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ft_printf.h"

int	ft_form(va_list ap, const char c)
{
	int	value;

	value = 0;
	if (c == 'c')
		value += ft_putchar_i(va_arg(ap, int));
	else if (c == 's')
		value += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		value += ft_print_hex_ptr(va_arg(ap, unsigned long long));
	else if (c == 'd' || c == 'i')
		value += ft_putnbr_i(va_arg(ap, int));
	else if (c == 'u')
		value += ft_print_u(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		value += ft_print_hexa_conv(va_arg(ap, unsigned int), c);
	else if (c == '%')
		value += ft_putchar_i('%');
	return (value);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print;
	va_list	ap;

	i = 0;
	print = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print += ft_form(ap, str[i++ + 1]);
		}
		else
			print += ft_putchar_i(str[i]);
		i++;
	}
	va_end(ap);
	return (print);
}
/*
int	main()
{
	char			c;
	char			*s;
	int				x;
	unsigned int	y;
	unsigned int	z;

	c = 'H';
	s = "1234567894568234792837492384792384723984723984729384723984723984729384792387412345678945612";
	x = -15154;
	y = -15045;
 	z = 154546;
	printf("%s\n", s);
	ft_printf("%s\n", s);

	printf("%c\n", c);
	ft_printf("%c\n", c);

	printf("%p\n", s);
	ft_printf("%p\n", s);

	printf("%d\n", x);
	ft_printf("%d\n", x);

	printf("%i\n", x);
	ft_printf("%i\n", x);

	printf("%u\n", y);
	ft_printf("%u\n", y);

	printf("%x\n", z);
	ft_printf("%x\n", z);

	printf("%X\n", z);
	ft_printf("%X\n", z);

	return (0);
}
*/
