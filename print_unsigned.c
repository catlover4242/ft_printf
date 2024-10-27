/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:59:32 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/23 21:59:32 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	printout(unsigned int nb)
{
	if (nb > 9)
		print_unsigned(nb / 10);
	if (nb <= 9)
	{
		ft_putchar_fd(nb + 48, 1);
		return ;
	}
	ft_putchar_fd((nb % 10) + 48, 1); 
}

int	print_unsigned(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	
}