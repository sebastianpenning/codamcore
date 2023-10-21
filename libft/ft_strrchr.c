/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 15:39:04 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/21 22:44:24 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// This function basically does the reverse of strchr
// c = c % 256 to still be able to compare bytes. we then 
// go from the end at compare until we find the charachter
// or if it is not found at all we return null

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*s_cptr;
	char	*return_cptr;

	index = ft_strlen(s);
	s_cptr = (char *)s;
	c = c % 256;
	if (c == '\0')
	{
		return_cptr = &s_cptr[index];
		return (return_cptr);
	}
	while (index >= 0)
	{
		if (s_cptr[index] == c)
		{
			return_cptr = &s_cptr[index];
			return (return_cptr);
		}
		index--;
	}
	return_cptr = NULL;
	return (return_cptr);
}
