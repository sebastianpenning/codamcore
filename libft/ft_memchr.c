/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:06:38 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/21 15:13:28 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// this function takes parameter s and we try to find c witin
// n bytes. We first convert it to char pointer to be able to 
// compare byte by byte.
// % 256 added because if a int above 256 is given it will 
// go off the ascii table. Otherwise it can never find the 
// char it is looking for in the memory. If chr is not found in
// n memory bytes then the pointer is made null and returned.

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*s_vptr;

	s_vptr = (char *)s;
	index = 0;
	while (index < n)
	{
		if (*(s_vptr + index) == (c % 256))
		{
			s_vptr = s_vptr + index;
			return (s_vptr);
		}
		index++;
	}
	s_vptr = NULL;
	return (s_vptr);
}
