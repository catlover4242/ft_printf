#include "ft_printf.h"

int	ft_putchar_print(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_print(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i += ft_putchar_print(s[i]);
	return (i);
}

int ft_printint(int nb)
{
    int i = 0;

    if (nb < 0)
    {
        i += ft_putchar_print('-');
        nb = -nb;
    }
    if (nb > 9)
        i += ft_printint(nb / 10);
    i += ft_putchar_print((nb % 10) + '0');
    
    return i;
}