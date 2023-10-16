/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 21:30:56 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 19:18:48 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


void *ft_memcpy(void *dest, const void *src, size_t n)
{
	long unsigned int index;
	index = 0;

	const char *src_cptr;
	char *dest_cptr;

	src_cptr = (char *)src;
	dest_cptr = (char *)dest;

	while (index <= n)
	{
		dest_cptr[index] = src_cptr[index];
		index++;
	}
	return (dest_cptr);
}


int main()
{
	const char constTest1[50] = "lololololololol";
	const char constTest2[25] = "lolol";
	const char constTest3[30] = "lololollolo";
	const char constTest4[40] = "lololollollo";
	
	char test1[50] = "This is pointer to the destination ";
	char test2[25] = "ointer of type vo";
	char test3[30] = "src  This is p";
	char test4[40] = " number of bytes to be copi";

	ft_memcpy(test1, constTest1, 15);
	ft_memcpy(test2, constTest2, 4);
	ft_memcpy(test3, constTest3, 6);
	ft_memcpy(test4, constTest4, 7);

	printf("%s\n", test1);
	printf("%s\n", test2);
	printf("%s\n", test3);
	printf("%s\n", test4);

	return(0);
}