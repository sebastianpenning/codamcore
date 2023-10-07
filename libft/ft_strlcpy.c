/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/07 20:34:47 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	printf("%s", dst);
	size_t srclen;
	size_t index;
	const char *src_cptr;
	src_cptr = (const char*)src;
	srclen = ft_strlen(src_cptr);

	index = 0;	
	if (size == 0)
	{
		return(srclen);
	}
	while (index < size -1)
	{
		dst[index] = src[index];
		index ++; 	
	}
	dst[index] = '\0';

	return(srclen);
}

int main ()
{
	const char src_test1[30] = "here is the man pa defin";
	const char src_test2[25] = " e copied into buffer ";
	const char src_test3[20] = " ers maximum are co";
	// const char src_test4[15] = " e size of ";

	char dest_test1[20] = "py or not; develop";
	char dest_test2[0];
	printf("%c\n", dest_test2[0]);
	char dest_test3[20];
	// char dest_test4[20] = "er whether";

	printf("%ld\n", ft_strlcpy(dest_test1, src_test1, 20));
	printf("%s\n", dest_test1);
	printf("%ld\n", strlcpy(dest_test1, src_test1, 20));
	printf("%s\n", dest_test1);
	
	printf("%ld\n", ft_strlcpy(dest_test2, src_test2, 0));
	printf("%s\n", dest_test2);
	printf("%ld\n", strlcpy(dest_test2, src_test2, 0));
	printf("%s\n", dest_test2);

	return (0);
}