/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:08:52 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 16:28:45 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	ft_putnbr(int num, int index)
{
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		index = index + 11; 	
	}
	else if (num >= 0 && num <= 9)
		index = ft_print_d(num, index);
	else
	{
		index = ft_putnbr(num / 10, index + 1);
		ft_putnbr(num % 10, 0);
	}
	return (index);
}
