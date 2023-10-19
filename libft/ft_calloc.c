/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 19:35:40 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 22:21:18 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdint.h>

void * ft_calloc(size_t nmemb, size_t size)
{
	void * memory_vptr;
	size_t totalsize;

	if (size != 0 && nmemb > SIZE_MAX/size)
		return(NULL);
	else
	{
		totalsize = nmemb * size;
		memory_vptr = malloc(totalsize);
		if (!memory_vptr)
			return(NULL);
		ft_bzero(memory_vptr, totalsize);
		return (memory_vptr);
	}
}

