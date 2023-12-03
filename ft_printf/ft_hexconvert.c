/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexconvert.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/03 10:43:41 by spenning      #+#    #+#                 */
/*   Updated: 2023/12/03 10:43:46 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char remainderconvert(long int arg)
{
	long int rem_int;
	char rem_char;

	rem_int = arg % 16;
	if (rem_int > 9)
	{
		rem_char = rem_int + 55;
	}
	else
	{
		rem_char = rem_int + 48;
	}
	return(rem_char);
}




char* ft_hexconvert(unsigned int arg)
{
	long int quotient;
	int index;
	char remainder;
	char *hexstr;

	hexstr = malloc(sizeof(char)*60);
	if(hexstr == NULL)
		return (NULL);
	index = 0;
	if(arg == 0)
		hexstr[index++] = '0';
	while(arg > 0)
	{
		quotient = arg / 16;
		remainder = remainderconvert(arg);
		hexstr[index] = remainder;
		arg = quotient;
		index++;
	}
	hexstr[index] = '\0';
	return(hexstr);
}

