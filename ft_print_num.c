/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:31:46 by mmomeni           #+#    #+#             */
/*   Updated: 2023/04/14 18:54:48 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_fd(int n, int fd, int base, int *i)
{
	int	c;

	if (n == INT_MAX)
		return (ft_putstr_fd("2147483647", fd, i));
	if (n == INT_MIN)
		return (ft_putstr_fd("-2147483648", fd, i));
	if (n < 0)
	{
		ft_putchar_fd('-', fd, i);
		n *= -1;
	}
	if (n > base - 1)
		ft_putnbr_base_fd(n / base, fd, base, i);
	c = n % base;
	if (c < 10)
		ft_putchar_fd(c + 48, fd, i);
	else
		ft_putchar_fd(c + 87, fd, i);
}

void	ft_putunbr_base_fd(unsigned long int n, int fd, \
unsigned long int base, int *i)
{
	unsigned long int	c;

	if (n > base - 1)
		ft_putunbr_base_fd(n / base, fd, base, i);
	c = n % base;
	if (c < 10)
		ft_putchar_fd(c + 48, fd, i);
	else
		ft_putchar_fd(c + 87, fd, i);
}

void	ft_putunbr_base_fd_cap(unsigned long int n, int fd, \
unsigned long int base, int *i)
{
	unsigned long int	c;

	if (n > base - 1)
		ft_putunbr_base_fd_cap(n / base, fd, base, i);
	c = n % base;
	if (c < 10)
		ft_putchar_fd(c + 48, fd, i);
	else
		ft_putchar_fd(c + 55, fd, i);
}
