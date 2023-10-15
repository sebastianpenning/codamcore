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

int main (){
    int var1 = 'c';
    int var2 = '\n';
    int var3 = ' ';
    int var4 = ']';

    printf("\nThe results = %d", ft_isprint(var1));
    printf("\nThe results = %d", ft_isprint(var2));
    printf("\nThe results = %d", ft_isprint(var3));
    printf("\nThe results = %d", ft_isprint(var4));

    return (0);
}