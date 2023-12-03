/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printptr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/03 10:44:48 by spenning      #+#    #+#                 */
/*   Updated: 2023/12/03 11:43:04 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(va_list args)
{
	int rtr;
	long unsigned arg;

	arg = va_arg(args, long unsigned int);
	if(arg == 0)
	{
		rtr = ft_putstr_fd("(nil)", 1);
		return (rtr);
	}
	rtr = 0;
	rtr += ft_putchar_fd('0', 1);
	rtr += ft_putchar_fd('x', 1);
	rtr += ft_hexconvertptr(arg);
	return(rtr);
}

