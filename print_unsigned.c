/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:59:32 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/23 21:59:32 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n / 10)
		ft_putunbr_fd(n / 10, fd);
	ft_putchar_fd(48 + (n % 10), fd);
}

static int	ft_unbrlen(unsigned int args)
{
	int	i;

	i = 1;
	while (args / 10 > 0)
	{
		i++;
		args /= 10;
	}
	return (i);
}

int	ft_putunbr(unsigned int args, int size)
{
	ft_putunbr_fd(args, 1);
	return (size + ft_unbrlen(args));
}