/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 15:39:04 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/17 21:03:10 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr (const char* s, int c)
{
	int index;
	char* s_cptr;
	char * return_cptr;
	s_cptr = (char*)s;
	index = ft_strlen(s);
	c = c % 256;

	if (c == '\0')
	{
		return_cptr = &s_cptr[index];
		return(return_cptr);
	}
	while (index >= 0)
	{
		if (s_cptr[index] == c)
		{
			return_cptr = &s_cptr[index];
			return(return_cptr);
		}
		index--;
	}
	return_cptr = NULL;
	return(return_cptr);
}
