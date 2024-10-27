/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:49:05 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/24 15:49:05 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int a = 42;
	int *ptr = &a;

	ft_printf("Char test : %c\n", 'W');
	ft_printf("Num test : %d\n", 42);
	ft_printf("Num test : %i\n", -42);
	ft_printf("Unsigned num : %u\n", 42);
	ft_printf("String test : %s\n", "le correcteur est trop beau");
	ft_printf("Pointer test : %p\n", ptr);
	ft_printf("Percentage sign : %%\n");

	
	printf("Char test : %c\n", 'W');
	printf("Num test : %d\n", 42);
	printf("Num test : %i\n", -42);
	printf("Unsigned num : %u\n", 42);
	printf("String test : %s\n", "le correcteur est trop beau");
	printf("Pointer test : %p\n", ptr);
	printf("Percentage sign : %%\n");
}