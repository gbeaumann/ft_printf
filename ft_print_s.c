/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:54:14 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 14:46:30 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

void	ft_print_s(char *s)
{
	int i2;

	i2 = 0;
	while (s[i2])
	{
		write (1, &s[i2], 1);
		i2++;
	}
}