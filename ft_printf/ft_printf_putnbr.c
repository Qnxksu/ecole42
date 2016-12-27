#include "ft_printf.h"

void	ft_printf_putnbr_signed(int nbr, t_args a)
{
	int	i;

	if (a.precision != -1)
	{
		i = a.precision - ft_intlen(nbr);
		while(i--)
			write(1, "0", 1);
	}
	ft_putnbr(nbr);
}

void	ft_printf_putnbr_hexa_min(unsigned long nbr, t_args a)
{
	int		n;

	a.tmp++;
	if (nbr == 0)
	{
		if (a.precision != -1)
		{
			n = a.precision - a.tmp;
			while(n--)
				write(1, "0", 1);
		}
		return;
	}
	n = nbr % 16;
	ft_printf_putnbr_hexa_min(nbr / 16, a);
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
	if (n >= 10 && n <= 16)
		ft_putchar('a' + (n - 10));
}

void	ft_printf_putnbr_hexa_maj(unsigned long nbr, t_args a)
{
	int		n;

	a.tmp++;
	if (nbr == 0)
	{
		if (a.precision != -1)
		{
			n = a.precision - a.tmp;
			while(n--)
				write(1, "0", 1);
		}
		return;
	}
	n = nbr % 16;
	ft_printf_putnbr_hexa_maj(nbr / 16, a);
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
	if (n >= 10 && n <= 16)
		ft_putchar('A' + (n - 10));
}

void	ft_printf_putnbr_octal(unsigned long nbr, t_args a)
{
	int		n;

	a.tmp++;
	if (nbr == 0)
	{
		if (a.precision != -1)
		{
			n = a.precision - a.tmp;
			while(n--)
				write(1, "0", 1);
		}
		return;
	}
	n = nbr % 8;
	ft_printf_putnbr_octal(nbr / 8, a);
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
}

void	ft_printf_putnbr_unsigned(unsigned long nbr, t_args a)
{
	int 	n;

	a.tmp++;
	if (nbr == 0)
	{
		if (a.precision != -1)
		{
			n = a.precision - a.tmp;
			while(n--)
				write(1, "0", 1);
		}
		return;
	}
	n = nbr % 10;
	ft_printf_putnbr_unsigned(nbr / 10, a);
	ft_putchar('0' + n);
}

void	ft_printf_putnbr_pointer(unsigned long nbr, t_args a)
{
	a.precision = -1;
	ft_putstr("0x");
	ft_printf_putnbr_hexa_min(nbr, a);
}