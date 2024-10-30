#include "ft_printf.h"

int ft_puthexa(unsigned long nb, int n)
{
    if (nb > 16)
        n += ft_puthexa(nb / 16, n);
    n += ft_putchar_print(HEXAA[nb % 16]);
    return (n);
}

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    else
        return (c);
}

int ft_puthexa_maj(unsigned long nb, int n)
{
	if (nb > 15)
		n += ft_puthexa(nb / 16, n);
	n += ft_putchar_print(ft_toupper(HEXAA[nb % 16]));
	return (n);
}

int ft_pointer(void *ptr)
{
	int	i;
	unsigned long nb;
	
	nb = (unsigned long)ptr;
	if (!ptr)
		return ft_putstr_print("(nil)");
	i = ft_putstr_print("0x");
	return (ft_puthexa(nb, i));

}

int	ft_printint_unsigned(int nb)
{
	int				i;
	unsigned int	nbr;

	i = 0;
	nbr = (unsigned)nb;
	if (nbr > 9)
		i += ft_printint(nb / 10);
	i += ft_putchar_print((nb % 10) + '0');
	return (i);
}