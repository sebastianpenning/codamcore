/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:54:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/09 19:54:21 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"
#include "ft_strncmp.c"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	char * l_cptr;
	char * b_cptr;
	int little_len;
	size_t index;

	l_cptr = (char *)little;
	b_cptr = (char *)big;
	little_len = ft_strlen(l_cptr);
	index = 0;

	if (l_cptr[0] == '\0')
	{
		return(b_cptr);
	}
	while (b_cptr[index] != '\0' && index < len)
	{
		if (ft_strncmp(l_cptr, b_cptr+ index, little_len) == 0)
		{
			return(b_cptr+index);
		}
		index++;
	}
	return(NULL);
}


int main ()
{	
	const char littletest1[20] = "    ";

	const char bigtest2[20] = "dsjc    dsjalka";

	printf("%s\n", strnstr(bigtest2, littletest1, 20));
	printf("%s\n", ft_strnstr(bigtest2, littletest1, 20));

	return (0);
}