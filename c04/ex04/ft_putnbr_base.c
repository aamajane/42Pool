/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:03:29 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/13 10:55:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base, unsigned int base_len)
{
	int	i;
	int	j;

	if (base_len < 2)
		return (0);
	i = -1;
	while (base[++i])
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13) || \
			base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (ft_check_base(base, base_len))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		if (n >= base_len)
			ft_putnbr_base(n / base_len, base);
		ft_putchar(base[n % base_len]);
	}
}
