/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printhex.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/03 10:49:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/12/03 10:49:40 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(va_list args, char specifier)
{
	int rtr;
	unsigned int arg;
	int index;
	char * hex;
	
	rtr = 0;
	arg = va_arg(args, unsigned int);
	hex = ft_hexconvert(arg);
	index = ft_strlen(hex) -1;
	while (index >= 0)
	{
		if (specifier == 'x')
			rtr += ft_putchar_fd(ft_tolower(hex[index]), 1);
		if (specifier == 'X')
			rtr += ft_putchar_fd(ft_toupper(hex[index]), 1);
		index--;
	}
	free(hex);	
	return (rtr);
}
