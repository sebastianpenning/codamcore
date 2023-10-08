/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:35:03 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/08 20:11:18 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t index;
	unsigned char * s1_cptr;
	unsigned char * s2_cptr;
	int returnval;

	index = 0;
	s1_cptr = (unsigned char*)s1;
	s2_cptr = (unsigned char*)s2;
	returnval = 0;
	if (n == 0)
	{
		return(0);
	}
	while (index < n)
	{
		if (*(s1_cptr+ index) != *(s2_cptr +index))
		{
			return(*(s1_cptr+ index) - *(s2_cptr +index));
		}
		index++;
		// printf("%ld\n", index);
		// printf("%d\n", returnval);
	}
	return(returnval);
}

int main ()
{
	const char firstTest1[10] = "B\200";
	const char firstTest2[10] = "";
	const char firstTest3[10] = "ABA ABA";
	const char firstTest4[10] = "ABA ABA";
	const int firstTest5[10] = {1, 2, 3, 4, 5};


	const char secondTest1[10] = "A";
	const char secondTest2[10] = "ABA ABA";
	const char secondTest3[10] = "ABAZABA";
	const char secondTest4[10] = "ABA ABAA";
	const int secondTest5[10] = {1, 2, 3, 4};

	printf("%d\n", memcmp(firstTest1, secondTest1, sizeof(char) *10));
	printf("%d\n", ft_memcmp(firstTest1, secondTest1, sizeof(char) *10));
	printf("%d\n", memcmp(firstTest2, secondTest2, sizeof(char) *10));
	printf("%d\n", ft_memcmp(firstTest2, secondTest2, sizeof(char) *10));
	printf("%d\n", memcmp(firstTest3, secondTest3, sizeof(char) *10));
	printf("%d\n", ft_memcmp(firstTest3, secondTest3, 10));
	printf("%d\n", memcmp(firstTest4, secondTest4, sizeof(char) *10));
	printf("%d\n", ft_memcmp(firstTest4, secondTest4, 10));
	printf("%d\n", memcmp(firstTest5, secondTest5, sizeof(int) *10));
	printf("%d\n", ft_memcmp(firstTest5, secondTest5, sizeof(int) *10));

	return(0);
}