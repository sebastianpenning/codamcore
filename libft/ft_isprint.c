/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 20:07:54 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:07:59 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>


int ft_isprint(int c){
    if (c > 31 && c < 127)
    {
        return(1);
    }
    else
    {
        return(0);
    }
    


    return(0);
}
