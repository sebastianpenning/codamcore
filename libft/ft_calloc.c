/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 19:35:40 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/10 20:30:11 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"
#include "ft_strncmp.c"

void * ft_calloc(size_t nmemb, size_t size)
{
	size_t totalsize;
	void * memory_vptr; 
	totalsize = nmemb * size;
	if (size == 0 || nmemb == 0)
	{
		return(memory_vptr);
	}
	if (totalsize / size != nmemb)
	{
		return(NULL);
	}
	memory_vptr = malloc(totalsize);
	return (memory_vptr);
}


int main ()
{
	printf("%p\n", calloc(2147483647, 100));
	printf("%p\n", ft_calloc(2147483647, 100));
	printf("%p\n", calloc(2147483647, 0));
	printf("%p\n", ft_calloc(2147483647, 0));
	printf("%p\n", calloc(58094, 23));
	printf("%p\n", ft_calloc(58094, 23));
	printf("%p\n", calloc(4, 8));
	printf("%p\n", ft_calloc(4, 8));
	return(0);
}