/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:52:19 by aamajane          #+#    #+#             */
/*   Updated: 2021/08/24 18:15:40 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_op	ft_is_op(char *op)
{
	if (*op == '+')
		return (add);
	if (*op == '-')
		return (sub);
	if (*op == '*')
		return (mul);
	if (*op == '/')
		return (div);
	if (*op == '%')
		return (mod);
	return (null);
}
