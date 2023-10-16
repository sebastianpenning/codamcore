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
