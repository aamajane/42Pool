/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:12:27 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/24 18:08:10 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

typedef enum e_op
{
	add,
	sub,
	mul,
	div,
	mod,
	null
}			t_op;

void	ft_add(int a, int b);
void	ft_sub(int a, int b);
void	ft_mul(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
t_op	ft_is_op(char *str);

#endif
