/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:27:28 by gbeauman          #+#    #+#             */
/*   Updated: 2021/11/18 14:44:24 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include	<stdio.h>
#include	<stdarg.h>
#include	<unistd.h>

int		main();
int		ft_printf(const char *str, ...);
void	ft_check(char check, va_list argptr);
void	ft_print_s(char *s);
void	ft_print_c(int ch);
void	ft_print_d(int num);
void	ft_putnbr(int num);

#endif
