#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>


int ft_isdigit(int c){
    if (c > 47 && c < 58)
    {
        return (1);
    }
    else{
        return (0);
    }
}
