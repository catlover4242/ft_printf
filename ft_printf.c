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

static int	checkformat(const char *format, void arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += print_char((int)arg);
	else if (*input == 's')
		i += print_s((char *)arg);
	else if (*input == 'd')
		i += print_int((int)arg);
	else if (*input == 'i')
		i += print_int((int)arg);
	else if (*input == 'u')
		i += print_unsigned((unsigned int)arg);
	else if (*input == 'x')
		i += print_hexa((unsigned int)arg);
	else if (*input == 'X')
		i += print_hexa((unsigned int)arg);
	else if (*input == 'p')
		i += print_pointer((unsigned long)arg);
	else if (*input == '%')
		ft_putchar_fd('%', 1);
		return (1);
	return (i);
}

int	ft_printf(const char *test, ...)
{
	va_list	args;
	va_start(args, test);
	int		i;

	i = 0;
	while (*test != '\0')
	{
		if (*test == '%')
			{
				if (ft_strchr("cspdiuxX", *test))
					i += checkformat()
				else if (*test == '%')
					i += print_char('%');
			}
		else
			i = i + print_char(*test);
		test++;
	}
	va_end(args);
	return (i);
}