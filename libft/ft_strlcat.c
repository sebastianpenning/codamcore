/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 20:43:08 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:25:12 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t index;
	size_t src_len;
	size_t dst_len;
	size_t sum_len;
	const char * src_cptr;

	index = 0;
	src_len = strlen(src);
	dst_len = strlen(dst);
	sum_len = src_len + dst_len;
	src_cptr = (char*)src;
	while (index <= src_len - 1)
	{
		if((index + dst_len) == size)
		{
			return(sum_len);
		}
		dst[dst_len] = src_cptr[index];
		dst_len++;
		index++;
	}
	return(sum_len);
}
