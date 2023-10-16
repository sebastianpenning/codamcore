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
