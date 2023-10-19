/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 20:43:08 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 12:55:13 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
// #include <stdio.h>
// #include <bsd/string.h>

// size_t ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t index;
// 	size_t s2_index;
// 	size_t src_len;
// 	size_t dst_len;
// 	char * src_cptr;

// 	index = 0;
// 	src_len = ft_strlen(src);
// 	dst_len = ft_strlen(dst);
// 	s2_index = dst_len;
// 	src_cptr = (char*)src;
// 	if (size < 0)
// 		return(dst_len + src_len);	
// 	while (index < src_len && 
// 	// index < dst_len && 
// 	s2_index < size - 1)
// 	{
// 		if (s2_index >= dst_len)
// 		{
// 			dst[s2_index] = src_cptr[index];
// 			index++;
// 		}
// 		s2_index++;
// 	}
// 	dst[s2_index] = '\0';
// 	if(dst_len < size - 1)
// 		return (src_len + dst_len);
// 	return(src_len + s2_index);
// }


// size_t ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t dst_len;
// 	size_t src_len;
// 	size_t index;
// 	size_t s2_index;


// 	src_len = ft_strlen((const char*)src);
// 	dst_len = ft_strlen(dst);
// 	index = 0;
// 	s2_index = 0;
// 	if (size == 0)
// 		return (src_len + size);
// 	while (
// 		// dst[index] != '\0' && 
// 		index < size - 1 && index < src_len + size)
// 	{
// 		if (index >= dst_len  && dst[index] == '\0')
// 		{
// 			dst[index] = (char)src[s2_index];
// 			s2_index++;
// 		}
// 		index++;
// 	}
// 	if (size > dst_len)
// 		return(src_len + dst_len);
// 	return (src_len + size);
// }

size_t ft_strlcat(char *dst, const char *src, size_t size) {
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t total_len = dst_len + src_len;

    if (size <= dst_len)
        return size + src_len;

    size_t num_to_copy = size - dst_len - 1;

    if (num_to_copy > src_len)
        num_to_copy = src_len;

    if (num_to_copy > 0) {
        ft_memcpy(dst + dst_len, src, num_to_copy);
        dst[dst_len + num_to_copy] = '\0';
    }

    return total_len;
}

// int main ()
// {	
// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	memset(dest, 'C', 5);

// 	// printf("%zu\n", strlcat(dest, src, -1));
// 	// printf("%s\n", dest);
// 	printf("%zu\n", ft_strlcat(dest, src, -1));
// 	printf("%s\n", dest);
// 	printf("%d\n", dest[7]);

// 	return(0);
// }


