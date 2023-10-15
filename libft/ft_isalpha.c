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




int main(int argc, char* argv[]) {
    int argIndex = 1;

    if (argc > 1)
    {
        while (argIndex >= argc)
    {
        ft_isalpha(*argv[argIndex]);
        argIndex++;
    }
    }
    else {
        printf("%s", "no Arguments\n");
    }
    
    
    
    
    int var1 = 'c';
    int var2 = '2';
    int var3 = '/';
    int var4 = ':';
    int var5 = 'D';
    char str[] = "tests";

    printf("the result is %d\n", ft_isalpha(var1));
    printf("the result is %d\n", ft_isalpha(var2));
    printf("the result is %d\n", ft_isalpha(var3));
    printf("the result is %d\n", ft_isalpha(var4));
    printf("the result is %d\n", ft_isalpha(var5));
    printf("test = %s\n", str);
    

    return (0);
}