/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:50:10 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/16 12:40:54 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(unsigned long nb, int chose, int zero)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	if (nb < 16 && chose == 16)
	{
		while (zero > 1)
		{
			write(1, "0", 1);
			zero--;
		}
		write(1, &hexa_base[nb % 16], 1);
	}
	else if (nb >= 16 && chose == 16)
	{
		ft_print_hexa(nb / 16, chose, zero - 1);
		write(1, &hexa_base[nb % 16], 1);
	}
	else if (chose == 2)
	{
		write(1, &hexa_base[nb / 16], 1);
		write(1, &hexa_base[nb % 16], 1);
	}
}

void	ft_print_column_2(char *str, unsigned int i, unsigned int j, \
		unsigned int size)
{
	while (j < i + 16 && j < size)
	{
		ft_print_hexa(str[j], 2, 16);
		if (j % 2)
			write(1, " ", 1);
		j++;
	}
	while (j < i + 16)
	{
		write(1, "  ", 2);
		if (j % 2)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_column_3(char *str, unsigned int i, unsigned int j, \
		unsigned int size)
{
	while (j < i + 16 && j < size)
	{
		if (str[j] < 32 || str[j] > 126)
			write(1, ".", 1);
		else
			write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned long	char_addr;
	char			*str;

	str = (char *)addr;
	i = 0;
	while (i < size)
	{
		j = i;
		char_addr = (unsigned long)(addr + i);
		ft_print_hexa(char_addr, 16, 16);
		write(1, ": ", 2);
		ft_print_column_2(str, i, j, size);
		j = i;
		ft_print_column_3(str, i, j, size);
		i += 16;
	}
	return (addr);
}
