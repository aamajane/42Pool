/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:20:13 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/12 12:26:18 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;
	unsigned int	j;

	d_len = 0;
	s_len = 0;
	while (dest[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	i = d_len;
	j = 0;
	while (src[j] && i < (size - 1) && size != 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (d_len > size)
		return (size + s_len);
	return (d_len + s_len);
}
