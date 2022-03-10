/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:23:11 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/16 17:16:49 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char c)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	ft_putchar(hexa_base[c / 16]);
	ft_putchar(hexa_base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str)
	{
		c = *str;
		if (c <= 31 || c >= 127)
		{
			ft_putchar('\\');
			ft_print_hexa(c);
		}
		else
			ft_putchar(c);
		str++;
	}
}
