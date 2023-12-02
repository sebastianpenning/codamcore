#include "ft_printf.h"

int ft_printamp()
{
	int rtr;

	rtr = 0;
	rtr += ft_putchar_fd('%', 1);
	return(rtr);
}
