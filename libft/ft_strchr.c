/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 12:50:37 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/14 19:27:19 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

char *ft_strchr(const char *s, int c)
{
	int index;
	char *s_cptr;
	char *return_cptr;

	index = 0;
	s_cptr = (char*)s;

	while (s_cptr[index] != '\0')
	{
		if (s_cptr[index] == c)
		{
			return_cptr = &s_cptr[index];
			return(return_cptr);
		}
		index++;
	}
	if (s_cptr[index] == '\0' && c == '\0')
	{
		return_cptr = &s_cptr[index];
		return(return_cptr);
	}
	return_cptr = NULL;
	return(return_cptr);
}

// int main ()
// {
// 	const char test1[30] = "?ent the two following func";
// 	const char test2[30] = "ent the two/ following func";	
// 	const char test3[30] = "ent the two following func";
// 	const char test4[30] = " djd\0ioewj";	

// 	printf("%s\n", ft_strchr(test1, '?'));
// 	printf("%s\n", ft_strchr(test2, '/'));
// 	//printf("%s\n", ft_strchr(test3, '!'));
// 	printf("%s\n", ft_strchr(test4, '\0'));
// }

