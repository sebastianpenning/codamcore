/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 19:35:40 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:21:04 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
