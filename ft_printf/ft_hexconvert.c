#include "libftprintf.h"
#include <stdio.h>

static void lstcontentdel(void *arg)
{
	free(arg);
}

static char *hexconvertstr(t_list** head)
{
	int index;
	int lstsize;
	char *hexstr;
	char *contentchar;
	t_list *temp;

	temp = (*head);
	index = 0;
	lstsize = (ft_lstsize(temp) + 1);
	if((hexstr = (char *)malloc(sizeof(char) * lstsize)) == NULL)
		return(0);
	while (temp != NULL)
	{
		contentchar = (char*)temp->content;
		hexstr[index] = *contentchar;
		temp = temp->next;
		index = index + 1;
	}
	hexstr[index] = '\0';
	return(hexstr);
}


static char* remainderconvert(int arg)
{
	int rem_int;
	char rem_char;
	char *rem_str;


	if((rem_str = malloc(sizeof(char)*2)) == NULL)
		return(0);
	rem_int = arg % 16;
	if (rem_int > 9)
	{
		rem_char = rem_int + 55;
		rem_str[0] = rem_char;
	}
	else
	{
		rem_char = rem_int + 48;
		rem_str[0] = rem_char;
	}
	rem_str[1] = '\0';
	return(rem_str);
}




char* ft_hexconvert(int arg)
{
	int quotient;
	char *remainder;
	t_list *head;
	t_list *temp;
	char *hexstr;
	
	quotient = arg / 16;
	remainder = remainderconvert(arg);
	// temp = ft_lstnew(ft_strdup(remainder));
	temp = ft_lstnew(remainder);
	remainder = NULL;
	head = temp;
	arg = quotient;
	while(arg > 0)
	{
		quotient = arg / 16;
		remainder = remainderconvert(arg);
		temp = ft_lstnew(remainder);
		ft_lstadd_front(&head, temp);
		arg = quotient;
	}
	remainder = NULL;
	hexstr = hexconvertstr(&head); 
	ft_lstclear(&head, lstcontentdel);
	return(hexstr);
}
