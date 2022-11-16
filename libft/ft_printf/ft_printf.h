/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:42:56 by malleman          #+#    #+#             */
/*   Updated: 2022/11/16 15:32:02 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<stdlib.h>

int	ft_putchar_i(int c);
int	ft_putstr(char *s);
int	ft_strlen(char *s);
int	ft_putnbr_i(int nb);
int	ft_len_hexa(long int ptr);

void	ft_putchar_fd(char c, int fd);

char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);

int	ft_print_hex_ptr(unsigned long long ptr);
int	ft_print_u(unsigned int n);
int	ft_print_hexa_conv(unsigned int n, char value);

int	ft_printf(const char *str, ...);

#endif
