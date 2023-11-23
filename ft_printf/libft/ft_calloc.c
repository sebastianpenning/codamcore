/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 19:35:40 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/21 12:58:33 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// takes nmemb and size parameters, functions first checks
// with unsigned long long max_size if allocation would be possible.
// nmemb cannot be bigger than max / size and size is bigger than zero then
// it will return null because this allocation won't work, just as calloc
// if nmemb is too big but size is 0, then will give a pointer that 
// can later be free, just as calloc does in real life. 
// with the parameters given, if it is possible, then the size is allocated
// plus the memory is all zero'd

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void				*memory_vptr;
	size_t				totalsize;
	unsigned long long	max_size;

	max_size = 1844674407370955161;
	if (size != 0 && nmemb > max_size / size)
		return (NULL);
	else
	{
		totalsize = nmemb * size;
		memory_vptr = malloc(totalsize);
		if (!memory_vptr)
			return (NULL);
		ft_bzero(memory_vptr, totalsize);
		return (memory_vptr);
	}
}
