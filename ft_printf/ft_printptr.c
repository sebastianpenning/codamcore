#include "ft_printf.h"

int	ft_printptr(va_list args)
{
	int index;
	unsigned long int arg;
	char * hex;
	arg = va_arg(args, unsigned long int);
	hex = ft_hexconvert(arg);
	index = ft_strlen(hex);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	while (index >= 0)
	{
		ft_putchar_fd(ft_tolower(hex[index]), 1);
		index--;
	}
	free(hex);
	return(0);
}

