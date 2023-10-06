/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 20:08:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/06 20:28:34 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
	long unsigned int index;
	index = 0;

	char *cptr;
	cptr = (char*)s;

	while (index <= n)
	{
		cptr[index] = '\0';
		index++;
	}
}

int main ()
{
	char test1[50];
	char test2[25];
	char test3[30];
	char test4[60];

	strcpy(test1, "bytes of the object pointed");
	strcpy(test2, "bytes of t");
	strcpy(test3, "ted to by dst with zer");
	strcpy(test4, "bytes of the object pointed to by dst with zer");

	ft_bzero(test1, 12);
	ft_bzero(test2, 10);
	ft_bzero(test3, 15);
	ft_bzero(test4, 5);
	int index;
	index = 0;

	while (index <= 50)
	{
		printf("%c\n", test1[index]);
		index++;
	}
	 

	printf("%s\n", test2);
	printf("%s\n", test3);
	printf("%s\n", test4);


	return(0);
}