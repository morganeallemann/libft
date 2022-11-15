/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:09:34 by malleman          #+#    #+#             */
/*   Updated: 2022/11/15 15:55:13 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdarg.h>
#include"ft_printf.h"

int	ft_putchar_i(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s)
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
