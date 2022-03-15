/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:25:46 by aamajane          #+#    #+#             */
/*   Updated: 2022/03/15 13:26:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*map;
	int	i;

	map = (int *)malloc(sizeof(*map) * length);
	if (!map)
		return (NULL);
	i = -1;
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}
