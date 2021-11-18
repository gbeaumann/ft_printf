/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:09:26 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 14:43:45 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int	i;
	
	i = 0;
	va_start(argptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(str[i], argptr);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
	va_end(argptr);
	return (i);
}
