/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spenning <spenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:57:49 by spenning          #+#    #+#             */
/*   Updated: 2023/10/04 14:28:37 by spenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>



int ft_strlen(char input[]){
    if (input[0] == '\0')
    {
        return(0);
    }
    else
    {
        int index;
        index = 0;

        while (input[index] != '\0')
        {
            index++;   
        }
        return index;
    }
}


int main (){
    char test1[20] = "test1";
    char test2[20] = "test12";
    char test3[20] = "test123";

    printf("\nThis is the results: %d", ft_strlen(test1));
    printf("\nThis is the results: %d", ft_strlen(test2));
    printf("\nThis is the results: %d", ft_strlen(test3));

    return(0);
}