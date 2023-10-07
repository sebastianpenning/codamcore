/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/07 18:17:20 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	const char *src_cptr;
	char temp[n];
	char *dest_cptr;
	dest_cptr = (char *)dest;
	src_cptr = (char *)src;
	long unsigned int index;
	index = 0;
	while (index <= n)
	{
		temp[index] = src_cptr[index];
		index++;	
	}
	index =0;
	while (index <= n)
	{
		dest_cptr[index] = temp[index];	
		index++;
	}
	return(dest_cptr);
}

int main ()
{
	char destTest1[50] = "m str2 to str1, but for overlappin";
	char destTest2[40] = " ve() is a safer appr";
	int destTest3[30] = {30, 20, 256, 30, 50};
	int destTest4[60] = {30, 20, 256, 30, 50, 50, 40, 3, 5, 7};
	
	const char srcTest1[50] = "llololololloloolo";
	const char srcTest2[40] = "llolololollolo";
	const int srcTest3[30] = {3, 4, 5, 6, 7};
	const int srcTest4[60] = {8, 9, 99, 350, 1};

	int charact_counter = 8;
	int int_counter_2 = 3;
	int int_counter_3 = 4;

	ft_memmove(destTest1, srcTest1, sizeof(char)*charact_counter);
	ft_memmove(destTest2, srcTest2, sizeof(char)*charact_counter);
	ft_memmove(destTest3, srcTest3, sizeof(int)*int_counter_2);
	ft_memmove(destTest4, srcTest4, sizeof(int)*int_counter_3);

	printf("%s\n", destTest1);
	printf("%s\n", destTest2);

	long unsigned int index = 0;
	while (index <= sizeof(int)*int_counter_2)
	{
		printf("%d\n", destTest3[index]);
		index++;
	}
	printf("%s", "\n");
	index = 0;
	while (index <sizeof(int)*int_counter_3)
	{
		printf("%d\n", destTest4[index]);
		index++;
	}
	return(0);
}