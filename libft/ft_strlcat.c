/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 20:43:08 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/17 22:48:23 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t index;
	size_t s2_index;
	size_t src_len;
	size_t dst_len;
	char * src_cptr;

	index = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	s2_index = dst_len;
	src_cptr = (char*)src;

	if(size <= 0)
		return(src_len);	
	while (index < src_len && index < dst_len && s2_index < size - 1)
	{
		if (s2_index >= dst_len)
		{
			dst[s2_index] = src_cptr[index];
			index++;
		}
		s2_index++;
	}
	dst[s2_index] = '\0';
	if(dst_len < size - 1)
		return (src_len + dst_len);
	return(src_len + size);
}

int main ()
{	
	const char src_test1[10] = "AAAAAAAAA";
	const char src_test2[25] = "here is the man pa defin";
	const char src_test3[25] = "here is the man pa defin";


	char dest_test1[30] = "CCCCC";
	char dest_test2[80] = "py or not; develop";
	char dest_test3[2];

	// printf("%zu\n", ft_strlcat(dest_test1, src_test1, -1));
	// printf("%s\n", dest_test1);
	printf("%zu\n", strlcat(dest_test1, src_test1, 6));
	printf("%s\n", dest_test1);
	// printf("%ld\n", ft_strlcat(dest_test1, src_test1, 100));
	// printf("%s\n", dest_test1);
	
	// printf("%ld\n", ft_strlcat(dest_test2, src_test2, 30));
	// printf("%s\n", dest_test2);
	// printf("%ld\n", strlcat(dest_test2, src_test2, 30));
	// printf("%s\n", dest_test2);

	// printf("%ld\n", ft_strlcat(dest_test3, src_test3, 2));
	// printf("%s\n", dest_test3);int main ()

	// printf("%zu\n", strlcat(dest_test1, src_test1, 0));
	// printf("%s\n", dest_test1);
	// printf("%ld\n", ft_strlcat(dest_test1, src_test1, 100));
	// printf("%s\n", dest_test1);
	
	// printf("%ld\n", ft_strlcat(dest_test2, src_test2, 30));
	// printf("%s\n", dest_test2);
	// printf("%ld\n", strlcat(dest_test2, src_test2, 30));
	// printf("%s\n", dest_test2);

	// printf("%ld\n", ft_strlcat(dest_test3, src_test3, 2));
	// printf("%s\n", dest_test3);
	// printf("%ld\n", strlcat(dest_test3, src_test3, 2));
	// printf("%s\n", dest_test3);


	return(0);
}


