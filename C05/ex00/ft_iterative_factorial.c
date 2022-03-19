/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:19:18 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/17 10:40:30 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 0;
	if (nb >= 0)
		fact = 1;
	while (nb >= 2)
		fact = fact * nb--;
	return (fact);
}
