/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:06:38 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:22:47 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
