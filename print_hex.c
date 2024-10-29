/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:42:47 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/27 17:42:47 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int nbr, int format)
{
    int i;

    i = 0;
    if (nbr >= 16)
    {
        i += ft_hexa(nbr / 16, format);
        i += ft_hexa(nbr % 16, format);
    }
    else
    {
        if (format == 0)
            ft_putchar_fd(*(LOWER = (nbr % 16)), 1);
        else if (format == -1)
            ft_putchar_fd(*(UPPER = (nbr % 16)), 1);
        i++;
    }
    return (i);
}

int ft_puthexa(unsigned int nb, int size, int format)
{
    int hex;

    hex = ft_hexa(nb, format);
    return (size + hex);
}