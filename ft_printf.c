/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:38:17 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/23 13:38:17 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion(va_list args, const char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_print(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr_print(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_printint(va_arg(args, int));
	else if (c == 'u')
		count += ft_printint_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		count += ft_puthexa(va_arg(args, unsigned int), count);
	else if (c == 'X')
		count += ft_puthexa_maj(va_arg(args, unsigned int), count);
	else if (c == 'p')
		count += ft_pointer(va_arg(args, void *));
	else if (c == '%')
		count = ft_putchar_print('%');
	return (count);
	
}

int	ft_printf(const char *str, ...)
{
	size_t		i;
	int			returns;
	va_list		arg;

	i = 0;
	returns = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			returns += conversion(arg, str[i]);
		}
		else
		{
			write(1, &str[i], 1);
			returns++;
		}
		i++;
	}
	va_end(arg);
	return (returns);
}