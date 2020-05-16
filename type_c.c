#include "printf.h"

void	c_width_minus(t_printf *list, unsigned int c)
{
	ft_putchar_cow(c, list);
	while (list->width > 1)
	{
		ft_putchar_cow(' ', list);
		list->width--;
	}
}

void	c_width(t_printf *list, unsigned int c)
{
	if (list->flags[1] == '-')
		c_width_minus(list, c);
	else
	{
		while (list->width > 1)
		{
			ft_putchar_cow(' ', list);
			list->width--;
		}
		ft_putchar_cow(c, list);
	}
}

void	type_c(t_printf *list)
{
	unsigned int c;

	c = va_arg(list->ap, int);
	if (list->width)
		c_width(list, c);
	else
		ft_putchar_cow(c, list);
}
