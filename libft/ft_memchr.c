/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:06:38 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/08 18:32:52 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"

void * ft_memchr(const void *s, int c, size_t n)
{	
	size_t index;
	char * s_vptr;
	s_vptr = (char*)s;
	index = 0;

	while (index < n)
	{
		if (*(s_vptr + index) == c)
		{
			s_vptr = s_vptr + index;
			return(s_vptr);
		}
		index++;
	}
	s_vptr = NULL;
	return(s_vptr);
}

int main ()
{
	const char test1[30] = "?ent the two following? func";
	const int test2[30] = {1, 2, 3, 4, 5, 6, 7};	
	const char test3[30] = "ent the two following func";
	const char test4[30] = " \0djd\0ioewj";	

	printf("%p\n", ft_memchr(test1, '?', sizeof(char)*30));
	printf("%p\n", ft_memchr(test2, 5, sizeof(int)*30));
	printf("%p\n", ft_memchr(test3, '!', sizeof(char)*30));
	printf("%p\n", ft_memchr(test4, '\0', sizeof(char)*30));

	return(0);
}