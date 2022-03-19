/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:28:23 by aamajane          #+#    #+#             */
/*   Updated: 2022/03/15 13:25:31 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (cmp(tab[i - 1], tab[i]) > 0)
		{
			ft_strswap(&tab[i - 1], &tab[i]);
			i = 0;
		}
		i++;
	}
}
