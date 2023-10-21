/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 16:15:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/21 20:03:22 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// function compares s1 to s2 until either n is reached or both string
// have reached their null terminator

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	s1_len;
	size_t	s2_len;
	int		returnval;

	index = 0;
	returnval = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (index < n && (index < s1_len || index < s2_len))
	{
		returnval = returnval + (s1[index] - s2[index]);
		index++;
	}
	return (returnval);
}
