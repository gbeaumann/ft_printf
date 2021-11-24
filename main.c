/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:56:24 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/24 13:46:40 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_printf.h"

int	main()
{
	printf("%i\n", printf("Hello %x, %p ca va%c\n", -30, "comment", '?'));
	ft_printf("%i\n", ft_printf("Hello %x, %p ca va%c\n", -30, "comment", '?'));
	return (0);
}
