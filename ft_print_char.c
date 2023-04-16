/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:30:19 by mmomeni           #+#    #+#             */
/*   Updated: 2023/04/14 18:35:35 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd, int *n)
{
	*n += 1;
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd, int *n)
{
	size_t	i;

	if (!s)
	{
		*n += 6;
		write(fd, "(null)", 6);
		return ;
	}
	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	*n += (int) i;
	write(fd, s, i);
}
