#include "libftprintf.h"
#include <stdio.h>

int	ft_printhexlow(va_list args)
{
	int arg;
	int index;
	char * hex;
	
	arg = va_arg(args, int);
	hex = ft_hexconvert(arg);
	index = ft_strlen(hex);
	while (index >= 0)
	{
		ft_putchar_fd(ft_tolower(hex[index]), 1);
		index--;
	}
	free(hex);	
	return (0);
}
