/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:34:13 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:05:32 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

char ft_toupper(int c)
{
	if (c > 96 && c <123)
	{
		c = c - 32;
		return(c);
	}
	else
	{
		return(c);
	}
}

