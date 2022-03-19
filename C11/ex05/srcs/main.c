/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:10:59 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/24 18:16:00 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int ac, char **av)
{
	void	(*do_op[5])(int, int);
	t_op	op;

	do_op[add] = &ft_add;
	do_op[sub] = &ft_sub;
	do_op[mul] = &ft_mul;
	do_op[div] = &ft_div;
	do_op[mod] = &ft_mod;
	if (ac == 4)
	{
		op = ft_is_op(av[2]);
		if (op == null)
			ft_putnbr(0);
		else
			do_op[op](ft_atoi(av[1]), ft_atoi(av[3]));
		ft_putchar('\n');
	}
	return (0);
}
