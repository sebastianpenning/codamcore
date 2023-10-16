/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 19:06:39 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:20:41 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int result;
	int index;
	char * c_ptr;
	c_ptr = (char *)nptr;
	result = 0;
	index = 0;

	while (c_ptr[index] != '\0')
	{
		if ((int)c_ptr[index] > 47 && (int)c_ptr[index] < 58)
		{
			result = result * 10 + ((int)c_ptr[index] - 48); 
		}
		index++;
	}
	return(result);
}
