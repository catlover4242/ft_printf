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

int	conversion(const char c, va_list args, int size)
{
	int	newsize;

	newsize = 0;
	if (s == 'c')
		newsize = ft_putchar(va_arg(args, int), size);
	else if (s == 's')
		newsize = print_string(va_arg(args, int), size);
	else if (s == 's')
		newsize = print_string(va_arg(args, int), size);
	else if (s == 'd')
		newsize = printint(va_arg(args, int), size);
	else if (s == 'i')
		newsize = printint(va_arg(args, int), size);
	else if (s == 'u')
		newsize = ft_putunbr(va_arg(args, unsigned int), size);
	else if (s == 'x')
		newsize = ft_puthexa(va_arg(args, unsigned int), size, 0);
	else if (s == 'X')
		newsize = ft_puthexa(va_arg(args, unsigned int), size, 1);
	else if (s == 'p')
		newsize = print_string(va_arg(args, int), size);
	else if (s == '%')
	{
		ft_putchar_fd('%', 1);
		newsize = size + 1;
	}
	return (newsize);
	
}
int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			size;

	size = 0;
	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			size = conversion(*(s + 1), args, size);
			s++;
		}
		else
		{
			write(1, &(*s), 1);
			size++;
		}
		s++;
	}
	va_end(args);
	return (size);
}