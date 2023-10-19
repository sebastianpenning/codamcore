/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 20:37:00 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include "ft_strlen.c"

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

	if (size == 0)
	{
		return(srclen);
	}
	while (index < size -1 && dst[index] != '\0' && index <= srclen)
	{
		dst[index] = src[index];
		index ++;
	}
	if (size < dstlen)
		dst[index++] = '\0';
	return(srclen);
}

int main()
{

	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

	// printf("%zu\n", strlcpy(dest, src, -1));
	// printf("%c\n", dest[0]);
	// printf("%c\n", dest[1]);
	// printf("%c\n", dest[2]);
	// printf("%c\n", dest[3]);
	// printf("%c\n", dest[4]);
	// printf("%c\n", dest[5]);
	// printf("%d\n", dest[6]);
	// printf("%c\n", dest[7]);
	// printf("%c\n", dest[8]);
	// printf("%c\n", dest[9]);
	// // printf("%d\n", dest[10]);
	// printf("%s\n", src);
	// printf("%s\n", dest);
	// printf("%d\n", !strcmp(src, dest));


	printf("%zu\n", ft_strlcpy(dest, src, -1));
	printf("%c\n", dest[0]);
	printf("%c\n", dest[1]);
	printf("%c\n", dest[2]);
	printf("%c\n", dest[3]);
	printf("%c\n", dest[4]);
	printf("%c\n", dest[5]);
	printf("%d\n", dest[6]);
	printf("%c\n", dest[7]);
	printf("%c\n", dest[8]);
	printf("%c\n", dest[9]);
	// printf("%d\n", dest[10]);
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%d\n", !strcmp(src, dest));


	return(0);
}