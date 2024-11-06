/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:30:11 by pleblond           #+#    #+#             */
/*   Updated: 2024/11/05 21:47:22 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_unbr_rec(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_unbr_rec(nb / 10);
	}
	ft_print_char((nb % 10) + '0');
	len++;
	return (len);
}

int	ft_print_unbr(va_list args)
{
	int				len;
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	len = 0;
	len += ft_unbr_rec(nb);
	return (len);
}