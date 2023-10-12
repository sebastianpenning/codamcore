/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 13:31:02 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/12 21:46:59 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strncmp.c"
#include "ft_strlcpy.c"
#include "ft_strchr.c"

// static free all

static int store_substring(char **allocation_array, char const *string, size_t end_index)
{
	char* string_cptr;
	string_cptr=(char*)malloc(sizeof(char) * (end_index + 1));
	allocation_array[0] = strlcpy(allocation_array + 0, string, end_index);
}
static int detect_substring(char **alloc_array, char const *strin, char charact)
{
	size_t index;

	index = 1;
	if (ft_strchr(strin, charact) == NULL)
	{
		while (ft_strchr(strin, charact) != NULL)
		{
			index++;
		}
		store_substring(alloc_array, strin, index);
	}
}	

static char ** create_splits(char **alloc_arr, char const *stri, char chara)
{
	size_t alloc_index ;
	alloc_index = 0; 
	while (!stri)
	{
		detect_substring(alloc_arr[alloc_index], stri, chara);
		stri++;
		alloc_index++;
	}
	return(alloc_arr);
}

static size_t sumsplit(char const *str, char ch)
{
	size_t sum;
	char * s_cptr;
	size_t index;

	s_cptr = (char*)s;

	while (s_cptr[index] != '\0')
	{
		if (s_cptr[index] == ch)
		{
			sum++;
		}
		index++;
	}
	return(sum);
}

size_t ft_split(char const *s, char c)
{
	size_t len_s;
	size_t split_sum;
	char ** return_arr;
	
	split_sum = sumsplit(s, c);
	return_arr = (char**)malloc(sizeof(char*) * split_sum);

	create_splits(return_arr, s, c);

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