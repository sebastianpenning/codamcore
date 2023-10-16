/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 20:08:13 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:08:15 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>


int ft_isalpha(int c){
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        return(0);
    }
    else{
        return(1);
    }
}
