/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 15:39:04 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/08 16:12:25 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"

char * ft_strrchr (const char* s, int c)
{
	int index;
	char* s_cptr;
	char * return_cptr;
	s_cptr = (char*)s;
	index = ft_strlen(s);

	if (c == '\0')
	{
		return_cptr = &s_cptr[index];
		return(return_cptr);
	}
	while (index > 0)
	{
		if (s_cptr[index] == c)
		{
			return_cptr = &s_cptr[index];
			return(return_cptr);
		}
		index--;
	}
	return_cptr = NULL;
	return(return_cptr);
}

int main ()
{

	char test1[30] = "?ent the two following? func";
	const char test2[30] = "ent the two/ following/ func";	
	const char test3[30] = "ent the two following func";
	const char test4[30] = " \0djd\0ioewj";	

	printf("%s\n", ft_strrchr(test1, '?'));
	printf("%s\n", ft_strrchr(test2, '/'));
	printf("%s\n", ft_strrchr(test3, '!'));
	printf("%s\n", ft_strrchr(test4, '\0'));

	return (0);
}