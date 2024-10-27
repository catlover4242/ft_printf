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

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	int value;

	i = 0;
	va_start(args, s);
	while(s[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == 's')
		{
			value += print_s(va_arg(args, char *));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'd' || str[i + 1] == 'i')
		{
			value += print_int(va_arg(args, int));
			i++; 
		}
		else if (str[i] == '%' && str[i + 1] == 'c')
		{
			value += print_char(va_arg(args, int));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'p')
		{
			value += print_pointer(va_arg(arg, void *));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == '%')
		{
			value += ft_putchar_fd('%', 1);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'x')
		{
			value += print_hex(va_arg(args, unsigned int));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'X')
		{
			value += print_majhex(va_arg(args, unsigned int));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'u')
		{
			value += print_unsigned(va_arg(args, unsigned int));
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			value++;
		}
		i++;
	}
	va_end(args);
	return (value);
}

int main()
{
	ft_printf("%s", "bonjour ca va ?");
	return 0;
}