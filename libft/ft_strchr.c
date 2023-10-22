/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 12:50:37 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/22 16:01:58 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// added % 256 to make sure a character in ascii
// is checked. Also added condition that if c == '\0'
// then the the function returns pointer to the terminator
// as described in the man.

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*s_cptr;
	char	*return_cptr;

	index = 0;
	s_cptr = (char *)s;
	while (s_cptr[index] != '\0')
	{
		if ((unsigned char)s_cptr[index] == (unsigned char)c)
		{
			return_cptr = &s_cptr[index];
			return (return_cptr);
		}
		index++;
	}
	if (s_cptr[index] == '\0' && c == '\0')
	{
		return_cptr = &s_cptr[index];
		return (return_cptr);
	}
	return_cptr = NULL;
	return (return_cptr);
}
