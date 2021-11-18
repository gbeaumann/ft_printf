/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:02:45 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 14:46:11 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

void	ft_check(char check, va_list argptr)
{
	if (check == 's')
		ft_print_s(va_arg(argptr, char *));
	else if (check == 'c')
		ft_print_c(va_arg(argptr, int));
	else if (check == 'd')
		ft_putnbr(va_arg(argptr, int));
}
