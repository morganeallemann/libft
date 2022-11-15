/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:36:23 by malleman          #+#    #+#             */
/*   Updated: 2022/11/15 16:16:11 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

static int	ft_form(va_list ap, const char c)
{
	int value;

	value = 0;
	if (c == 'c')
		value = ft_putchar_i(va_arg(ap, int));
	else if (c == 's')
		value = ft_putstr(va_arg(ap, char *));
	else if (c == 'p')

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
			print = ft_form(ap, str[i++ + 1]);
		}
		else 
			print = ft_putchar_i(str[i]);
		i++;
	}
	va_end(ap);
	return (print);
}

int main()
{
	char c;
	char *s;

	c = 'H';
	s = "Hello World";
	printf("%s\n", s);
	ft_printf("%s\n", s);

	printf("%c\n", c);
	printf("%c\n", c);

	return (0);
}
