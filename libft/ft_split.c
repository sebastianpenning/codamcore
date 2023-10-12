/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 13:31:02 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/12 15:43:24 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strncmp.c"
#include "ft_strlcpy.c"
#include "ft_strchr.c"

static int alloc_splits(size_t sub_index, size_t ns_string_index, char * buffer, char** alloc_arr)
{
	size_t alloc_size;
	
	if (sub_index > 0)
	{
		buffer[sub_index] = '\0';
		alloc_size = sizeof(char) * (ft_strlen(buffer) + 1);

		alloc_arr[ns_string_index] = (char*)malloc(alloc_size);
		ft_strlcpy(alloc_arr[ns_string_index], buffer, sub_index);
		ns_string_index++;
	}
	return(ns_string_index);
}


static char ** create_splits(char **alloc_arr, size_t s_len, char const *s, char c)
{
	char buffer[16384];
	size_t org_index;
	size_t sub_index;
	size_t ns_string_index;	

	org_index = 0;
	ns_string_index = 0;

	while (org_index < s_len)
	{
		// detect_substring
		while (org_index < s_len)
		{
			if (ft_strchr(c, s[org_index]) == NULL)
			{
				break;
			}
			org_index++;
		}
		size_t sub_index = 0;

		// store_substring
		while (org_index < s_len)
		{
			if (ft_strchr(c, s[org_index]) != NULL)
			{
				break;
			}
			buffer[sub_index] = s[org_index];
			org_index++;
			sub_index;
		}
		if (ns_string_index alloc_splits(sub_index, ns_string_index, buffer, alloc_arr))
		{
			return(NULL);
		}
		return(alloc_arr);
	}


static size_t sumsplit(char const *s, char c)
{
	size_t sum;
	char * s_cptr;
	size_t index;

	s_cptr = (char*)s;

	while (s_cptr[index] != '\0')
	{
		if (s_cptr[index] == c)
		{
			sum++;
		}
		index++;
	}
	return(sum);
}

	

	return(alloc_arr);
}

size_t ft_split(char const *s, char c)
{
	size_t len_s;
	size_t split_sum;
	char ** return_arr;
	
	len_s = ft_strlen(s);
	split_sum = sumsplit(s, c);
	return_arr = (char**)malloc(sizeof(char*) * split_sum);


	// while (index < len_s)
	// {
	// 	while (index < len_s)
	// 	{
	// 		if(ft_strchr(s, c) == NULL)
	// 		{
	// 			break;
	// 		}
	// 		index++;
	// 	}	
		
	// }
	// 	string_index = 0;
	// 	while (index < len_s)
	// 	{
	// 		if(ft_strchr(s, c) != NULL)
	// 		{
	// 			break;
	// 		}
	// 		buffer[string_index] = s[index];
	// 		string_index++;
	// 	}
	// 	buffer[string_index] = '\0';

	// 	alloc_size = sizeof(char) * (ft_strlen(buffer) + 1);

	// 	return_arr[string_index]

	return(split_sum);
}


int main ()
{
	const char firstTest1[15] = "ABABABABABA";
	const char firstTest2[10] = "AABA!AAB";
	const char firstTest3[10] = "ABA ABA";
	const char firstTest4[10] = "AA ABA";

	char secondTest1 = 'B';
	char secondTest2 = '!';
	char secondTest3 = 'V';
	char secondTest4 = ' ';

	printf("%ld", ft_split(firstTest1, secondTest1));
	return (0);
}