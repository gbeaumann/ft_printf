/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:09:26 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/17 15:54:04 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

void	ft_prints(char *s)
{
	while (*s)
	{
		write (1, &*s, 1);
		s++;
	}
}
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
		   	if (str[i]	== 's')
			{
				ft_prints(va_arg(argptr, char *));
				i++;
			}
		}
		write (1, &str[i], 1);
		i++;
	}
	va_end(argptr);
	return (0);
}
