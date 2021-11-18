/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:08:52 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 15:34:04 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	ft_putnbr(int num, int index)
{
	if (num >= 0 && num <= 9)
		ft_print_d(num);
	else
	{
		ft_putnbr(num / 10, index++);
		ft_putnbr(num % 10, index);
	}
	return (index);
}
