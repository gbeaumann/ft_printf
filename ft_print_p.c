/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:49:52 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/24 16:14:00 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

static int putnbr_p(unsigned long **num, int index)
{
	if (num >= 0 && num <= 9)
		index = ft_print_num(num, index);
	else if (num >= 10 && num < 16)
		index = print_p(num, index);
	else
	{
		index = putnbr_p(num / 16, index + 1);
		putnbr_p(num % 16, index);
	}
	return (index);
 }

static int	print_p(unsigned long **num, int index)
{
	char	*list;
	int             i;
	unsigned long   check;
		list = "abcdef";
		i = 0;
		check = 10;
		while (check != &num)
		{
			i++;
			check++;
		}
		write (1, &list[i], 1);
		index++;
		return (index);
}

int	ft_print_p(unsigned long str, int index)
{

	unsigned long	*add;
	unsigned long	**ptr;

	add = &str;
	ptr = &add;
	index = putnbr_p(ptr, index);
	return (index);
}
