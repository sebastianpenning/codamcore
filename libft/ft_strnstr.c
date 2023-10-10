/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:54:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/10 19:06:58 by spenning      ########   odam.nl         */
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
		// printf("%d\n", ft_strncmp(l_cptr, b_cptr+ index, little_len -1));
		// printf("%s\n", l_cptr);
		// printf("%s\n", b_cptr+ index);
		// printf("%d\n", little_len);
		// printf("%s\n", "---------");
		if (ft_strncmp(l_cptr, b_cptr+ index, little_len -1) == 0)
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
	const char littletest2[20] = "";
	const char littletest3[20] = "bobo";


	const char bigtest1[20] = "dsjc    dsjalka";
	const char bigtest2[20] = "dsjc    dsjalka";
	const char bigtest3[10] = "dsjc    ";

	printf("%s\n", strnstr(bigtest1, littletest1, 20));
	printf("%s\n", ft_strnstr(bigtest2, littletest1, 20));
	printf("%s\n", strnstr(bigtest2, littletest2, 20));
	printf("%s\n", ft_strnstr(bigtest2, littletest2, 20));
	printf("%s\n", strnstr(bigtest3, littletest3, 20));
	printf("%s\n", ft_strnstr(bigtest3, littletest3, 20));

	return (0);
}