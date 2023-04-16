/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:18:36 by mmomeni           #+#    #+#             */
/*   Updated: 2023/04/14 18:55:17 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include "unistd.h"
# include "stdarg.h"

void	ft_putchar_fd(char c, int fd, int *n);
void	ft_putstr_fd(char *s, int fd, int *n);
void	ft_putnbr_base_fd(int n, int fd, int base, int *i);
void	ft_putunbr_base_fd(unsigned long int n, int fd, \
unsigned long int base, int *i);
void	ft_putunbr_base_fd_cap(unsigned long int n, int fd, \
unsigned long int base, int *i);
int		ft_printf(const char *fmt, ...);

#endif
