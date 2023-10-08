/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 16:15:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/08 16:59:39 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;
	int returnval;
	char * s1_cptr;
	char * s2_cptr;

	index = 0;
	s1_cptr = (char*)s1;
	s2_cptr = (char*)s2;
	returnval = (s1_cptr[index] - s2_cptr[index]);
	while (index < n && s1_cptr[index] != '\0' && s2_cptr[index] != '\0')
	{
		index++;
		returnval = returnval + (s1_cptr[index] - s2_cptr[index]);
	}
	return(returnval);
}

int main ()
{
	const char firstTest1[10] = "B";
	const char firstTest2[10] = "";
	const char firstTest3[10] = "ABA ABA";
	const char firstTest4[10] = "ABA ABA";
	const char firstTest5[10] = "ABA ABA";


	const char secondTest1[10] = "A";
	const char secondTest2[10] = "ABA ABA";
	const char secondTest3[10] = "ABAZABA";
	const char secondTest4[10] = "ABA ABAA";
	const char secondTest5[9] = "ABA ABAA";

	printf("%d\n", strncmp(firstTest1, secondTest1, 10));
	printf("%d\n", ft_strncmp(firstTest1, secondTest1, 10));
	printf("%d\n", strncmp(firstTest2, secondTest2, 10));
	printf("%d\n", ft_strncmp(firstTest2, secondTest2, 10));
	printf("%d\n", strncmp(firstTest3, secondTest3, 10));
	printf("%d\n", ft_strncmp(firstTest3, secondTest3, 10));
	printf("%d\n", strncmp(firstTest4, secondTest4, 10));
	printf("%d\n", ft_strncmp(firstTest4, secondTest4, 10));
	printf("%d\n", strncmp(firstTest5, secondTest5, 10));
	printf("%d\n", ft_strncmp(firstTest5, secondTest5, 10));


	return(0);
}