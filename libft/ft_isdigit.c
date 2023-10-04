#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>


int ft_isdigit(int input){
    if (input > 47 && input < 58)
    {
        return (1);
    }
    else{
        return (0);
    }
}

int main (){

    int var1 = 'c';
    int var2 = '3';
    int var3 = ';';
    int var4 = ' ';

    printf("\n the results is: %d", ft_isdigit(var1));
    printf("\n the results is: %d", ft_isdigit(var2));
    printf("\n the results is: %d", ft_isdigit(var3));
    printf("\n the results is: %d", ft_isdigit(var4));
    return (0);
}