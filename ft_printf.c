/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:19:21 by mmomeni           #+#    #+#             */
/*   Updated: 2023/04/14 18:57:25 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_sign(const char *fmt, va_list ap, int *n)
{
	if (*fmt == 'd' || *fmt == 'i')
		ft_putnbr_base_fd(va_arg(ap, int), STDOUT_FILENO, 10, n);
	if (*fmt == 'x')
		ft_putunbr_base_fd(va_arg(ap, unsigned int), STDOUT_FILENO, 16, n);
	if (*fmt == 'X')
		ft_putunbr_base_fd_cap(va_arg(ap, unsigned int), STDOUT_FILENO, 16, n);
	if (*fmt == 'c')
		ft_putchar_fd(va_arg(ap, int), STDOUT_FILENO, n);
	if (*fmt == 's')
		ft_putstr_fd(va_arg(ap, char *), STDOUT_FILENO, n);
	if (*fmt == 'u')
		ft_putunbr_base_fd(va_arg(ap, unsigned int), STDOUT_FILENO, 10, n);
	if (*fmt == 'p')
	{
		ft_putstr_fd("0x", STDOUT_FILENO, n);
		ft_putunbr_base_fd((unsigned long int) va_arg(ap, void *), \
		STDOUT_FILENO, 16, n);
	}
	if (*fmt == '%')
		ft_putchar_fd('%', STDOUT_FILENO, n);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		n;

	n = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%' && *(fmt + 1))
			handle_sign(++fmt, ap, &n);
		else
			ft_putchar_fd(*fmt, STDOUT_FILENO, &n);
		fmt++;
	}
	va_end(ap);
	return (n);
}
