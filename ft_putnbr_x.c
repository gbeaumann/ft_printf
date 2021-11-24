/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:50:33 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/24 11:36:06 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	ft_putnbr_x(unsigned long num, int index)
{
	if (num >= 0 && num <= 9)
		index = ft_print_num(num, index);
	else if (num >= 10 && num < 16)
		index = ft_print_x(num, index);
	else
	{
		index = ft_putnbr_x(num / 16, index + 1);
		ft_putnbr_x(num % 16, index);
	}
	return (index);
}
