/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:32:28 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/15 22:21:27 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//Check waarom er bij de documentatie van memset een size_t als datatype wordt gebruikt
//https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm

void *ft_memset(void *s, int c, size_t n)
{
	char *cptr;
	cptr = (char*)s;
	long unsigned int index;
	index = 0;
	while (index <= n)
	{
		cptr[index] = c;
		index++;
	}
	return(cptr);
	// printf("%c\n", cptr[0]);
	// printf("%d\n", charachter);
	// printf("%ld\n", size);
}


int main ()
{
	char str1[50];
	char str2[50];
	char str3[50];
	char str4[50];

	strcpy(str1, "test 1 test 2 test 3");
	strcpy(str2, "This is the number of bytes");
	strcpy(str3, "char conversion of this value");
	strcpy(str4, "set(void *str, int c, size_t ");

	ft_memset(str1, ' ', 2);
	printf("%s\n", str1);
	ft_memset(str2, '%', 20);
	printf("%s\n", str2);
	ft_memset(str3, 'd', 5);
	printf("%s\n", str3);
	ft_memset(str4, '?', 8);
	printf("%s\n", str4);


	return(0);
}