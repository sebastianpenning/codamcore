/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 21:25:39 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t dstlen;
	size_t index;

	const char *src_cptr;
	src_cptr = (const char*)src;
	srclen = ft_strlen(src_cptr);
	dstlen = ft_strlen((const char *)dst);
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
