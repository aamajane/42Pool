/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:43:04 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/17 11:21:30 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else if (index >= 3)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (-1);
}
