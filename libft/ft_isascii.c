#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

int ft_isascii(int input){
    if (input>=0 && input<=127)
    {
        return(1);
    }    
    else
    {
        return(0);
    }
}



int main (){

    int var1 = 127;
    int var2 = 'c';
    int var3 = '?';
    int var4 = 254;

    printf("\nThe results = %d", ft_isascii(var1));
    printf("\nThe results = %d", ft_isascii(var2));
    printf("\nThe results = %d", ft_isascii(var3));
    printf("\nThe results = %d", ft_isascii(var4));
    return (0);
}