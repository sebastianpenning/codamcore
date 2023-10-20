/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 13:31:02 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/20 22:08:17 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>
// #include "ft_strlcpy.c"
// #include "ft_strlen.c"

static int free_all(char **allocation_array, size_t alc_index)
{
	size_t index;
	index = 0;
	while (index <= alc_index)
	{
		free(allocation_array[index]);
		allocation_array[index] = 0;
		index++;
	}
	free(allocation_array);
	allocation_array = 0;
	return(0);
}

static int store_substring(char **allocation_array, char const *string, size_t end_index, size_t alc_index)
{
	char* string_cptr;
	string_cptr = (char*)malloc(sizeof(char) * (end_index + 1));

	if(string_cptr == NULL)
	{
		return(free_all(allocation_array, alc_index));
	}

	ft_strlcpy(string_cptr, string, end_index + 1);
	allocation_array[alc_index] = string_cptr;
	// printf("Current string is %s at %zu\n", allocation_array[alc_index], alc_index);
	return(1);
}

static size_t get_token(char const *strin, char charact, size_t start_index)
{
	size_t end_index;
	
	end_index = start_index;

	while (strin[end_index] != charact && strin[end_index] != '\0')
	{
		end_index++;
	}
	return(end_index);
}

static char ** create_splits(char **alloc_arr, char const *stri, char chara, size_t splits)
{
	size_t start_index;
	size_t end_index;
	size_t alloc_index;
	start_index = 0;
	alloc_index = 0; 
	end_index = 0;

	while (alloc_index < splits)
	{
		end_index = start_index; 
		end_index = get_token(stri, chara, start_index);
		if (end_index > start_index)
		{
			if(store_substring(alloc_arr,stri+start_index, (end_index - start_index), alloc_index) == 1)
			{
				alloc_index++;
			}
			else
			{
				return(NULL);
			}
		}
		if (!stri[end_index])
			return alloc_arr;
		start_index = end_index + 1;
	}
	return(alloc_arr);
}

// static size_t sumsplit(char const *str, char ch)
// {
// 	size_t sum;
// 	char * s_cptr;
// 	char * next_cptr;
// 	size_t index; 
// 	s_cptr = (char*)str;
// 	next_cptr = s_cptr + 1;

// 	index = 0;
// 	sum = 0;

// 	if (s_cptr[index] != ch)
// 		sum++;
// 	while (s_cptr[index] != '\0')
// 	{
// 		if (s_cptr[index] == ch && next_cptr[index] != ch && next_cptr[index] != '\0')
// 		{
// 			sum++;
// 		}
// 		index++;
// 	}
// 	if (sum == 1)
// 		sum--;
// 	return(sum);
// }

size_t count_words(const char* str, char delim) {
	size_t index;
	size_t count;

	index = 0;
	count = 0;
	while (str[index] != '\0' && str[index] == delim)
		index++;
	while (str[index] != '\0') {
		count++;
		while (str[index] != '\0' && str[index] != delim)
			index++;
		if (str[index] == '\0')
			break;
		while (str[index] != '\0' && str[index] == delim)
			index++;
	}
	return count;
}

char ** ft_split(char const *s, char c)
{
	size_t split_sum;
	char ** return_arr;
	
	split_sum = count_words(s, c);
	split_sum = split_sum + 1;
	return_arr = (char**)malloc((sizeof(char*) * split_sum));
	return_arr = create_splits(return_arr, s, c, split_sum);
	if (return_arr == NULL)
		return(NULL);
	return_arr[split_sum] = "\0";
	return(return_arr);
}

// int main ()
// {
// 	char * * tab = ft_split("  tripouille  42  ", ' ');
// 	printf("%d\n", !strcmp(tab[0], "tripouille"));
// 	printf("%s\n", tab[0]);
// 	printf("%s\n", tab[1]);
// 	printf("%s\n", tab[2]);
// 	if (tab[1] == NULL)
// 	{
// 		printf("%s\n", "is null");
// 	}
// }
