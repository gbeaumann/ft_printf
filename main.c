/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:56:24 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/19 11:31:07 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	main()
{
	printf("%i\n", printf("Hello %x, %s ca va%c\n", 17, "comment", '?'));
	ft_printf("%i\n", ft_printf("Hello %u, %s ca va%c\n", 14, "comment", '?'));
	return (0);
}
