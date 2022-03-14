/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:38:03 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/22 08:07:30 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_charset(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_in_charset(str[i], charset))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_in_charset(*str, charset))
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i > 0)
			count++;
	}
	return (count);
}

char	*ft_wordcopy(char *dest, char *src, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		len;
	int		i;

	size = ft_wordcount(str, charset);
	tab = (char **)malloc(sizeof(*tab) * (size + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_in_charset(*str, charset))
			str++;
		len = ft_wordlen(str, charset);
		tab[i] = (char *)malloc(sizeof(**tab) * (len + 1));
		if (!tab[i])
			return (NULL);
		ft_wordcopy(tab[i], str, len);
		str += len;
	}
	tab[size] = 0;
	return (tab);
}
