/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:03:00 by aamajane          #+#    #+#             */
/*   Updated: 2022/03/15 13:26:32 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	first;
	int	next;

	i = 1;
	while (i < length && !f(tab[i - 1], tab[i]))
		i++;
	if (i < length)
		first = f(tab[i - 1], tab[i]);
	while (i < length)
	{
		next = f(tab[i - 1], tab[i]);
		if ((first < 0 && next > 0) || (first > 0 && next < 0))
			return (0);
		i++;
	}
	return (1);
}
