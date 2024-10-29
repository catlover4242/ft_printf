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
# define LOWER "0123456789abcdef"
# define UPPER "0123456789ABCDEF"
# include <stdarg.h>
# include "./libft/libft.h"
# include <stdarg.h>

int	ft_putchar(char c, int size);
int	print_string(char *s, int size);
int	printint(int n, int size);
int ft_putunbr(unsigned int args, int size);
int ft_puthexa(unsigned int nb, int size, int format);

#endif