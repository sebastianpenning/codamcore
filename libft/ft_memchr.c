/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:06:38 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:03:39 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"

void * ft_memchr(const void *s, int c, size_t n)
{	
	size_t index;
	char * s_vptr;
	s_vptr = (char*)s;
	index = 0;

	while (index < n)
	{
		if (*(s_vptr + index) == c)
		{
			s_vptr = s_vptr + index;
			return(s_vptr);
		}
		index++;
	}
	s_vptr = NULL;
	return(s_vptr);
}
