/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 20:43:08 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/08 12:39:28 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"

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



int main ()
{	
	const char src_test1[24] = "here is the man pa defin";
	const char src_test2[25] = "here is the man pa defin";
	const char src_test3[25] = "here is the man pa defin";


	char dest_test1[100] = "py or not; develop";
	char dest_test2[80] = "py or not; develop";
	char dest_test3[2];

	// size_t len1;
	// size_t len2;
	// len1 = strlen(src_test1);
	// len2 = strlen(dest_test1);
	// printf("%ld\n", len1 + len2);

	// printf("%ld\n", ft_strlcat(dest_test1, src_test1, 50));
	// printf("%s\n", dest_test1);
	// printf("%ld\n", ft_strlcat(dest_test1, src_test1, 100));
	// printf("%s\n", dest_test1);
	
	// printf("%ld\n", ft_strlcat(dest_test2, src_test2, 30));
	// printf("%s\n", dest_test2);
	// printf("%ld\n", strlcat(dest_test2, src_test2, 30));
	// printf("%s\n", dest_test2);

	printf("%ld\n", ft_strlcat(dest_test3, src_test3, 2));
	printf("%s\n", dest_test3);
	// printf("%ld\n", strlcat(dest_test3, src_test3, 2));
	// printf("%s\n", dest_test3);


	return(0);
}