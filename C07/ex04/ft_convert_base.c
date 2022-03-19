/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:17:59 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/19 13:05:52 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_find_in_base(char c, char *base);
unsigned int	ft_check_base(char *base);
unsigned int	ft_nbrlen(int nbr, unsigned int n, unsigned int base_len);

int	ft_atoi_base(char *str, char *base_from, unsigned int base_len)
{
	int				i;
	int				res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -sign;
	while (ft_find_in_base(str[i], base_from) >= 0)
		res = res * base_len + ft_find_in_base(str[i++], base_from);
	return (sign * res);
}

char	*ft_itoa_base(int nbr, char *base_to, unsigned int base_len)
{
	unsigned int	n;
	unsigned int	nbr_len;
	char			*res;

	if (nbr < 0)
		n = -nbr;
	else
		n = nbr;
	nbr_len = ft_nbrlen(nbr, n, base_len);
	res = (char *)malloc(sizeof(*res) * (nbr_len + 1));
	if (!res)
		return (NULL);
	res[nbr_len] = '\0';
	while (nbr_len--)
	{
		res[nbr_len] = base_to[n % base_len];
		n /= base_len;
	}
	if (nbr < 0)
		res[0] = '-';
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	base_from_len;
	unsigned int	base_to_len;
	int				atoi_nbr;
	char			*itoa_nbr;

	base_from_len = ft_check_base(base_from);
	base_to_len = ft_check_base(base_to);
	if (!base_from_len || !base_to_len)
		return (NULL);
	atoi_nbr = ft_atoi_base(nbr, base_from, base_from_len);
	itoa_nbr = ft_itoa_base(atoi_nbr, base_to, base_to_len);
	return (itoa_nbr);
}
