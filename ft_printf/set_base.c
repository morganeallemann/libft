/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:55:32 by malleman          #+#    #+#             */
/*   Updated: 2022/11/15 16:16:08 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_hexa(char *s)
{
	int len;
	int	len_hex;

	len = ft_strlen(s);
	len_hex = 0;
	while (len > 0)
	{
		len_hex++;
		len = len / 16;
	}
	return (len_hex);
}

void	ft_hexa_str(unsigned int i, char *str)
{
	if (i >= 16)
	{
		ft_hexa_str(i / 16, str);
		ft_hexa_str(i % 16, str);
	}
	else
	{
		if (i < 10)
			ft_putchar_i(i + 48);
		else
			ft_putchar_i((i - 10) + 'a');
	}
}	

int	ft_print_hex_ptr(unsigned int ptr)
