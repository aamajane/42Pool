/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:49:35 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/06 11:00:14 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_print_combn(int n)
{
	char	nbr[11];
	int		i;

	nbr[0] = '0';
	i = 0;
	while (++i < n)
		nbr[i] = nbr[i - 1] + 1;
	nbr[i] = '\0';
	while (nbr[0] - '0' + n <= 10)
	{
		ft_putstr(nbr);
		if (nbr[0] - '0' + n != 10)
			write(1, ", ", 2);
		while (i-- && ++nbr[i] - '0' + n - i > 10)
			++nbr[i];
		while (++i > 0 && i < n)
			nbr[i] = nbr[i - 1] + 1;
	}
}
