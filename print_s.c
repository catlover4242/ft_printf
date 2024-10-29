/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:37:57 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/23 13:37:57 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s, int size)
{
	if (!s)
	{
		ft_putstr_fd(("null"), 1);
		return (size + 6);
	}
	ft_putstr_fd(s, 1);
	return (size + ft_strlen(s));
}