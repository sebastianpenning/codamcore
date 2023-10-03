#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>


int isalpha_checker(int input){
    if ((input > 64 && input < 91) || (input > 96 && input < 123))
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
        isalpha_checker(*argv[argIndex]);
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

    printf("the result is %d\n", isalpha_checker(var1));
    printf("the result is %d\n", isalpha_checker(var2));
    printf("the result is %d\n", isalpha_checker(var3));
    printf("the result is %d\n", isalpha_checker(var4));
    printf("the result is %d\n", isalpha_checker(var5));
    printf("test = %s\n", str);
    

    return (0);
}