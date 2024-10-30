/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:45:23 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/23 20:45:23 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef HEXAA
# define HEXAA "0123456789abcdef"
# endif

# include <stdarg.h>
# include "./libft/libft.h"
# include <stdio.h>
# include <limits.h>
# include <unistd.h>

int ft_printf(const char *s, ...);
int ft_putchar_print(char c);
int ft_putstr_print(char *s);
int ft_printint(int nb);
int ft_puthexa_maj(unsigned long nb, int n);
int ft_puthexa(unsigned long nb, int n);
int ft_pointer(void *ptr);
int	ft_printint_unsigned(int nb);

#endif