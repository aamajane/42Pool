/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 08:44:00 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/13 12:15:01 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_find_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
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
			base[i] == '-' || base[i] == '+')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int				i;
	int				res;
	int				sign;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (ft_check_base(base, base_len))
	{
		i = 0;
		res = 0;
		sign = 1;
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (ft_find_in_base(str[i], base) >= 0)
			res = res * base_len + ft_find_in_base(str[i++], base);
		return (sign * res);
	}
	return (0);
}
