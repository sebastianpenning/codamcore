/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:52:21 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:05:38 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

int ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = c + 32;
		return(c);
	}
	else
	{
		return(c);
	}
}

