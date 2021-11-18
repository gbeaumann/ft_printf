/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:02:45 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 15:38:33 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	ft_check(char check, va_list argptr, int index)
{
	if (check == 's')
		index = ft_print_s(va_arg(argptr, char *), index);
	else if (check == 'c')
		index = ft_print_c(va_arg(argptr, int), index);
	else if (check == 'd')
		index = ft_putnbr(va_arg(argptr, int), index);
	return (index);
}
