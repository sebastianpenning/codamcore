/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/20 19:48:00 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t index;
	const char *src_cptr;
	char *dst_cptr;

	src_cptr = src;
	dst_cptr = dst;
	srclen = ft_strlen(src_cptr);
	index = 0;

	if (size > 0)
	{
		while (index < (size -1) 
		&& src_cptr[index])
			{
				dst[index] = src[index];
				index ++;
			}
		dst[index] = '\0';
	}
	return(srclen);
}
