/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 13:31:02 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/15 00:25:41 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strchr.c"
#include "ft_strlcpy.c"

// static free all

static int store_substring(char **allocation_array, char const *string, size_t end_index, size_t alc_index)
{
	char* string_cptr;
	end_index = end_index + 1;
	string_cptr = (char*)malloc(sizeof(char) * (end_index));

	if(string_cptr == NULL)
	{
		return(0);
	}

	ft_strlcpy(string_cptr, string, end_index);
	allocation_array[alc_index] = string_cptr;
	printf("Current string is %s at %zu\n", allocation_array[alc_index], alc_index);
	return(1);
}

static size_t get_token(char const *strin, char charact, size_t start_index)
{
	size_t end_index;
	char *search_string;


	search_string = (char*)malloc(sizeof(char)*2);
	end_index = start_index;
	search_string[0] = charact; 
	search_string[1] = '\0';

	while (ft_strchr((const char *)search_string, strin[end_index]) == NULL)
	{
		end_index++;
	}
	free(search_string);
	return(end_index);
}

static char ** create_splits(char **alloc_arr, char const *stri, char chara)
{
	size_t stri_index;
	size_t stri_n_index;
	size_t alloc_index;
	stri_index = 0;
	alloc_index = 0; 


	// while ()
	while (stri[stri_index] != '\0')
	{
		stri_n_index = get_token(stri, chara, stri_index);
		if (stri_n_index > stri_index)
		{
			if (store_substring(alloc_arr,stri+stri_index, (stri_n_index - stri_index), alloc_index) == 1)
			{
				alloc_index++;
			}
		}
		if (!stri[stri_index])
			return alloc_arr;
		stri_index = stri_n_index + 1;
	}
	return(alloc_arr);
}

static size_t sumsplit(char const *str, char ch)
{
	size_t sum;
	char * s_cptr;
	char * next_cptr;
	size_t index; 
	s_cptr = (char*)str;
	next_cptr = s_cptr + 1;

	index = 0;
	sum = 0;

	if (s_cptr[index] != ch)
	{
		sum++;
	}
	while (s_cptr[index] != '\0')
	{
		if (s_cptr[index] == ch && next_cptr[index] != ch && next_cptr[index] != '\0')
		{
			sum++;
		}
		index++;
	}
	return(sum);
}

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

size_t count_words(const char* str, char delim) {
	size_t i;
	int is_word;
	size_t words;

	i = 0;
	is_word = 0;
	words = 0;
	while (str[i]) {
		if (is_word) {
			i++;
		} else {
			
		}
	}
}

char ** ft_split(char const *s, char c)
{
	size_t len_s;
	size_t split_sum;
	char ** return_arr;
	char * null_cptr;

	null_cptr = NULL;

	split_sum = sumsplit(s, c);
	return_arr = (char**)malloc((sizeof(char*) * split_sum) +1);
	return_arr = create_splits(return_arr, s, c);
	return_arr[split_sum + 1] = null_cptr;

	return(return_arr);
}


int main ()
{
	const char firstTest1[15] = "ABABABA";
	const char firstTest2[10] = "AABA!AAB";
	const char firstTest3[16] = "BBBABBABABABABA";
	const char firstTest4[10] = "AA ABA";

	char secondTest1 = 'B';
	char secondTest2 = '!';
	char secondTest3 = 'B';
	char secondTest4 = ' ';

	char ** resulttest1;

	int first_index;
	int second_index;

	first_index = 0;
	second_index = 0;

	// printf("%ld", ft_split(firstTest1, secondTest1));
	// ft_split(firstTest1, secondTest1);
	// ft_split(firstTest2, secondTest2);
	
	
	resulttest1 = ft_split(firstTest3, secondTest3);

	while (resulttest1[first_index] != NULL)
	{
		printf("%s\n", resulttest1[first_index]);
		free(resulttest1[first_index]);
		first_index++;
	}
	free(resulttest1);
	return (0);
}