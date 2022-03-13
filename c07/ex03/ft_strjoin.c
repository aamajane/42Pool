/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:49:08 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/19 13:51:37 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_size;
	char	*dest;

	i = -1;
	full_size = 0;
	while (++i < size)
		full_size += ft_strlen(strs[i]);
	full_size += ft_strlen(sep) * (size - 1);
	if (size == 0)
		full_size = 0;
	dest = (char *)malloc(sizeof(*dest) * (full_size + 1));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
	}
	return (dest);
}
