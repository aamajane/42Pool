/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:27:47 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/18 12:28:01 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

unsigned int	ft_check_base(char *base)
{
	int	i;
	int	j;

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
	if (i < 2)
		return (0);
	return (i);
}

unsigned int	ft_nbrlen(int nbr, unsigned int n, unsigned int base_len)
{
	unsigned int	i;

	i = 1;
	while (n >= base_len && i++)
		n /= base_len;
	if (nbr < 0)
		i++;
	return (i);
}
