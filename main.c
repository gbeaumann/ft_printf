/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:56:24 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 14:33:54 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	main()
{
	printf("%d\n", printf("Hello %d, %s ca va%c\n", 42, "comment", '?'));
	ft_printf("%d\n", ft_printf("Hello %d, %s ca va%c\n", 42, "comment", '?'));
	return (0);
}
