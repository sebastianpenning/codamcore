
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

// int test_atoi ()
// {
// 	const char test1[20] = "5";
// 	const char test2[20] = "120";
// 	const char test3[20] = "bobo";

// 	printf("%d\n", atoi(test1));
// 	printf("%d\n", ft_atoi(test1));
// 	printf("%d\n", atoi(test2));
// 	printf("%d\n", ft_atoi(test2));
// 	printf("%d\n", atoi(test3));
// 	printf("%d\n", ft_atoi(test3));

// 	return (0);
// }

// int test_bzero ()
// {
// 	char test1[50];
// 	char test2[25];
// 	char test3[30];
// 	char test4[60];

// 	strcpy(test1, "bytes of the object pointed");
// 	strcpy(test2, "bytes of t");
// 	strcpy(test3, "ted to by dst with zer");
// 	strcpy(test4, "bytes of the object pointed to by dst with zer");

// 	ft_bzero(test1, 12);
// 	ft_bzero(test2, 10);
// 	ft_bzero(test3, 15);
// 	ft_bzero(test4, 5);
// 	int index;
// 	index = 0;

// 	while (index <= 50)
// 	{
// 		printf("%c\n", test1[index]);
// 		index++;
// 	}
	 

// 	printf("%s\n", test2);
// 	printf("%s\n", test3);
// 	printf("%s\n", test4);


// 	return(0);
// }

// int test_calloc ()
// {
// 	printf("%p\n", calloc(2147483647, 100));
// 	printf("%p\n", ft_calloc(2147483647, 100));
// 	printf("%p\n", calloc(2147483647, 0));
// 	printf("%p\n", ft_calloc(2147483647, 0));
// 	printf("%p\n", calloc(58094, 23));
// 	printf("%p\n", ft_calloc(58094, 23));
// 	printf("%p\n", calloc(4, 8));
// 	printf("%p\n", ft_calloc(4, 8));
// 	return(0);
// }

// int test_isalnum ()
// {
// 	int var1 = 'c';
// 	int var2 = '1';
// 	int var3 = ']';
// 	int var4 = '@';

// 	printf("\nThe result is %d", ft_isalnum(var1));
// 	printf("\nThe result is %d", ft_isalnum(var2));
// 	printf("\nThe result is %d", ft_isalnum(var3));
// 	printf("\nThe result is %d", ft_isalnum(var4));
// 	return (0);
// }

// int test_isalpha() {

//     int var1 = 'c';
//     int var2 = '2';
//     int var3 = '/';
//     int var4 = ':';
//     int var5 = 'D';
//     char str[] = "tests";

//     printf("the result is %d\n", ft_isalpha(var1));
//     printf("the result is %d\n", ft_isalpha(var2));
//     printf("the result is %d\n", ft_isalpha(var3));
//     printf("the result is %d\n", ft_isalpha(var4));
//     printf("the result is %d\n", ft_isalpha(var5));
//     printf("test = %s\n", str);
    
//     return (0);
// }

// int test_isascii (){

//     int var1 = 127;
//     int var2 = 'c';
//     int var3 = '?';
//     int var4 = 254;

//     printf("\nThe results = %d", ft_isascii(var1));
//     printf("\nThe results = %d", ft_isascii(var2));
//     printf("\nThe results = %d", ft_isascii(var3));
//     printf("\nThe results = %d", ft_isascii(var4));
//     return (0);
// }

// int test_isdigit (){

//     int var1 = 'c';
//     int var2 = '3';
//     int var3 = ';';
//     int var4 = ' ';

//     printf("\n the results is: %d", ft_isdigit(var1));
//     printf("\n the results is: %d", ft_isdigit(var2));
//     printf("\n the results is: %d", ft_isdigit(var3));
//     printf("\n the results is: %d", ft_isdigit(var4));
//     return (0);
// }

// int test_isprint (){
//     int var1 = 'c';
//     int var2 = '\n';
//     int var3 = ' ';
//     int var4 = ']';

//     printf("\nThe results = %d", ft_isprint(var1));
//     printf("\nThe results = %d", ft_isprint(var2));
//     printf("\nThe results = %d", ft_isprint(var3));
//     printf("\nThe results = %d", ft_isprint(var4));

//     return (0);
// }

// int test_itoa()
// {
// 	int test = 654747;
// 	printf("%s", ft_itoa(test));
// 	return(0);
// }

// int test_memchr ()
// {
// 	const char test1[30] = "?ent the two following? func";
// 	const int test2[30] = {1, 2, 3, 4, 5, 6, 7};	
// 	const char test3[30] = "ent the two following func";
// 	const char test4[30] = " \0djd\0ioewj";	

// 	printf("%p\n", ft_memchr(test1, '?', sizeof(char)*30));
// 	printf("%p\n", ft_memchr(test2, 5, sizeof(int)*30));
// 	printf("%p\n", ft_memchr(test3, '!', sizeof(char)*30));
// 	printf("%p\n", ft_memchr(test4, '\0', sizeof(char)*30));

// 	return(0);
// }

// int test_memcmp ()
// {
// 	const char firstTest1[10] = "B\200";
// 	const char firstTest2[10] = "";
// 	const char firstTest3[10] = "ABA ABA";
// 	const char firstTest4[10] = "ABA ABA";
// 	const int firstTest5[10] = {1, 2, 3, 4, 5};


// 	const char secondTest1[10] = "A";
// 	const char secondTest2[10] = "ABA ABA";
// 	const char secondTest3[10] = "ABAZABA";
// 	const char secondTest4[10] = "ABA ABAA";
// 	const int secondTest5[10] = {1, 2, 3, 4};

// 	printf("%d\n", memcmp(firstTest1, secondTest1, sizeof(char) *10));
// 	printf("%d\n", ft_memcmp(firstTest1, secondTest1, sizeof(char) *10));
// 	printf("%d\n", memcmp(firstTest2, secondTest2, sizeof(char) *10));
// 	printf("%d\n", ft_memcmp(firstTest2, secondTest2, sizeof(char) *10));
// 	printf("%d\n", memcmp(firstTest3, secondTest3, sizeof(char) *10));
// 	printf("%d\n", ft_memcmp(firstTest3, secondTest3, 10));
// 	printf("%d\n", memcmp(firstTest4, secondTest4, sizeof(char) *10));
// 	printf("%d\n", ft_memcmp(firstTest4, secondTest4, 10));
// 	printf("%d\n", memcmp(firstTest5, secondTest5, sizeof(int) *10));
// 	printf("%d\n", ft_memcmp(firstTest5, secondTest5, sizeof(int) *10));

// 	return(0);
// }

// int test_memcpy()
// {
// 	const char constTest1[50] = "lololololololol";
// 	const char constTest2[25] = "lolol";
// 	const char constTest3[30] = "lololollolo";
// 	const char constTest4[40] = "lololollollo";
	
// 	char test1[50] = "This is pointer to the destination ";
// 	char test2[25] = "ointer of type vo";
// 	char test3[30] = "src  This is p";
// 	char test4[40] = " number of bytes to be copi";

// 	ft_memcpy(test1, constTest1, 15);
// 	ft_memcpy(test2, constTest2, 4);
// 	ft_memcpy(test3, constTest3, 6);
// 	ft_memcpy(test4, constTest4, 7);

// 	printf("%s\n", test1);
// 	printf("%s\n", test2);
// 	printf("%s\n", test3);
// 	printf("%s\n", test4);

// 	return(0);
// }

// int test_memmove ()
// {
// 	char destTest1[50] = "m str2 to str1, but for overlappin";
// 	char destTest2[40] = " ve() is a safer appr";
// 	int destTest3[30] = {30, 20, 256, 30, 50};
// 	int destTest4[60] = {30, 20, 256, 30, 50, 50, 40, 3, 5, 7};
	
// 	const char srcTest1[50] = "llololololloloolo";
// 	const char srcTest2[40] = "llolololollolo";
// 	const int srcTest3[30] = {3, 4, 5, 6, 7};
// 	const int srcTest4[60] = {8, 9, 99, 350, 1};

// 	int charact_counter = 8;
// 	int int_counter_2 = 3;
// 	int int_counter_3 = 4;

// 	ft_memmove(destTest1, srcTest1, sizeof(char)*charact_counter);
// 	ft_memmove(destTest2, srcTest2, sizeof(char)*charact_counter);
// 	ft_memmove(destTest3, srcTest3, sizeof(int)*int_counter_2);
// 	ft_memmove(destTest4, srcTest4, sizeof(int)*int_counter_3);

// 	printf("%s\n", destTest1);
// 	printf("%s\n", destTest2);

// 	long unsigned int index = 0;
// 	while (index <= sizeof(int)*int_counter_2)
// 	{
// 		printf("%d\n", destTest3[index]);
// 		index++;
// 	}
// 	printf("%s", "\n");
// 	index = 0;
// 	while (index <sizeof(int)*int_counter_3)
// 	{
// 		printf("%d\n", destTest4[index]);
// 		index++;
// 	}
// 	return(0);
// }

// int test_memset ()
// {
// 	char str1[50];
// 	char str2[50];
// 	char str3[50];
// 	char str4[50];

// 	strcpy(str1, "test 1 test 2 test 3");
// 	strcpy(str2, "This is the number of bytes");
// 	strcpy(str3, "char conversion of this value");
// 	strcpy(str4, "set(void *str, int c, size_t ");

// 	ft_memset(str1, ' ', 2);
// 	printf("%s\n", str1);
// 	ft_memset(str2, '%', 20);
// 	printf("%s\n", str2);
// 	ft_memset(str3, 'd', 5);
// 	printf("%s\n", str3);
// 	ft_memset(str4, '?', 8);
// 	printf("%s\n", str4);
// 	return(0);
// }


// int test_putchar()
// {
// 	ft_putchar_fd('c', 2);	
// 	return(0);
// }

// int test_putendl ()
// {
// 	char test[10] = "ccc";
// 	ft_putendl_fd(test, 2);	
// 	return(0);
// }

// int test_putnbr ()
// {
// 	int test = 1235;
// 	ft_putnbr_fd(test, 2);

// 	return(0);
// }

// int test_putstr_fd()
// {
// 	char test[10] = "ccc";
// 	ft_putstr_fd(test, 1);
// 	return(0);
// }

// int test_split ()
// {
// 	const char firstTest1[15] = "ABABABA";
// 	const char firstTest2[10] = "AABA!AAB";
// 	const char firstTest3[16] = "BBBABBABABABABA";
// 	const char firstTest4[10] = "AA ABA";

// 	char secondTest1 = 'B';
// 	char secondTest2 = '!';
// 	char secondTest3 = 'B';
// 	char secondTest4 = ' ';

// 	char ** resulttest;

// 	int index;
// 	size_t sumresult;

// 	index = 0;

// 	resulttest = ft_split(firstTest3, secondTest3);
// 	sumresult = sumsplit(firstTest3, secondTest3);
	
// 	sumresult = sumresult;
// 	printf("%ld\n", sumresult);


// 	while (index < sumresult)
// 	{
// 		printf("%s\n", resulttest[sumresult]);
// 		free(resulttest[sumresult]);
// 		sumresult--;
// 	}
// 	free(resulttest);

// 	return (0);
// }

// int test_strchr ()
// {
// 	const char test1[30] = "?ent the two following func";
// 	const char test2[30] = "ent the two/ following func";	
// 	const char test3[30] = "ent the two following func";
// 	const char test4[30] = " djd\0ioewj";	

// 	printf("%s\n", ft_strchr(test1, '?'));
// 	printf("%s\n", ft_strchr(test2, '/'));
// 	printf("%s\n", ft_strchr(test3, '!'));
// 	printf("%s\n", ft_strchr(test4, '\0'));
// }



// int test_strdup ()
// {
// 	const char test1[20] = "5";
// 	const char test2[20] = "120";
// 	const char test3[20] = "bobo";

// 	printf("%s\n", strdup(test1));
// 	printf("%s\n", ft_strdup(test1));
// 	printf("%s\n", strdup(test2));
// 	printf("%s\n", ft_strdup(test2));
// 	printf("%s\n", strdup(test3));
// 	printf("%s\n", ft_strdup(test3));
// 	return(0);
// }

// void pluschar_striteri(unsigned int ui, char* s)
// {
// 	int change;
// 	char n_char;
// 	change = (int)s[ui];
// 	change = change + 1;
// 	s[ui] = change;
// 	return;
// }

// int test_striteri()
// {
// 	char test[10] = "ABCDEFGH";
// 	ft_striteri(test, pluschar_striteri);
// 	printf("%s", test);
// 	return(0);
// }

// int test_strjoin ()
// {

// 	const char firstTest1[10] = "B";
// 	const char firstTest2[10] = "";
// 	const char firstTest3[10] = "ABA ABA";
// 	const char firstTest4[10] = "ABA ABA";
// 	const char firstTest5[10] = "ABA ABA";


// 	const char secondTest1[10] = "A";
// 	const char secondTest2[10] = "ABA ABA";
// 	const char secondTest3[10] = "ABAZABA";
// 	const char secondTest4[10] = "ABA ABAA";
// 	const char secondTest5[9] = "ABA ABAA";


// 	printf("%s\n", ft_strjoin(firstTest1, secondTest1));
// 	printf("%s\n", ft_strjoin(firstTest2, secondTest2));
// 	printf("%s\n", ft_strjoin(firstTest3, secondTest3));
// 	printf("%s\n", ft_strjoin(firstTest4, secondTest4));

// 	return(0);
// }

// int test_strlcat ()
// {	
// 	const char src_test1[10] = "AAAAAAAAA";
// 	const char src_test2[25] = "here is the man pa defin";
// 	const char src_test3[25] = "here is the man pa defin";


// 	char dest_test1[30] = "B";
// 	char dest_test2[80] = "py or not; develop";
// 	char dest_test3[2];

// 	printf("%zu\n", ft_strlcat(dest_test1, src_test1, 50));
// 	printf("%s\n", dest_test1);
// 	// printf("%ld\n", strlcat(dest_test1, src_test1, 50));
// 	// printf("%s\n", dest_test1);
// 	// printf("%ld\n", ft_strlcat(dest_test1, src_test1, 100));
// 	// printf("%s\n", dest_test1);
	
// 	// printf("%ld\n", ft_strlcat(dest_test2, src_test2, 30));
// 	// printf("%s\n", dest_test2);
// 	// printf("%ld\n", strlcat(dest_test2, src_test2, 30));
// 	// printf("%s\n", dest_test2);

// 	// printf("%ld\n", ft_strlcat(dest_test3, src_test3, 2));
// 	// printf("%s\n", dest_test3);
// 	// printf("%ld\n", strlcat(dest_test3, src_test3, 2));
// 	// printf("%s\n", dest_test3);


// 	return(0);
// }

// int test_strlcpy ()
// {
// 	const char src_test1[30] = "here is the man pa defin";
// 	const char src_test2[25] = " e copied into buffer ";
// 	const char src_test3[20] = " ers maximum are co";
// 	const char src_test4[15] = " e size of ";

// 	char dest_test1[20] = "py or not; develop";
// 	char dest_test2[0];
// 	printf("%c\n", dest_test2[0]);
// 	char dest_test3[20];
// 	char dest_test4[20] = "er whether";

// 	printf("%ld\n", ft_strlcpy(dest_test1, src_test1, 20));
// 	printf("%s\n", dest_test1);
// 	printf("%ld\n", strlcpy(dest_test1, src_test1, 20));
// 	printf("%s\n", dest_test1);
	
// 	printf("%ld\n", ft_strlcpy(dest_test2, src_test2, 0));
// 	printf("%s\n", dest_test2);
// 	printf("%ld\n", strlcpy(dest_test2, src_test2, 0));
// 	printf("%s\n", dest_test2);

// 	return (0);
// }

// int test_strlen (){
//     char test1[20] = "test1";
//     char test2[20] = "test12";
//     char test3[20] = "test123";

//     printf("\nThis is the results: %d", ft_strlen(test1));
//     printf("\nThis is the results: %d", ft_strlen(test2));
//     printf("\nThis is the results: %d", ft_strlen(test3));

//     return(0);
// }

// char pluschar(unsigned int ui, char c)
// {
// 	c = c + 1;
// 	return (c);
// }

// int test_strmapi ()
// {
// 	char const * test = "ABCDEFGH";

// 	printf("%s", ft_strmapi(test, pluschar));
// 	return(0);
// }

// int test_strncmp ()
// {
// 	const char firstTest1[10] = "B";
// 	const char firstTest2[10] = "";
// 	const char firstTest3[10] = "ABA ABA";
// 	const char firstTest4[10] = "ABA ABA";
// 	const char firstTest5[10] = "ABA ABA";


// 	const char secondTest1[10] = "A";
// 	const char secondTest2[10] = "ABA ABA";
// 	const char secondTest3[10] = "ABAZABA";
// 	const char secondTest4[10] = "ABA ABAA";
// 	const char secondTest5[9] = "ABA ABAA";

// 	printf("%d\n", strncmp(firstTest1, secondTest1, 10));
// 	printf("%d\n", ft_strncmp(firstTest1, secondTest1, 10));
// 	printf("%d\n", strncmp(firstTest2, secondTest2, 10));
// 	printf("%d\n", ft_strncmp(firstTest2, secondTest2, 10));
// 	printf("%d\n", strncmp(firstTest3, secondTest3, 10));
// 	printf("%d\n", ft_strncmp(firstTest3, secondTest3, 10));
// 	printf("%d\n", strncmp(firstTest4, secondTest4, 10));
// 	printf("%d\n", ft_strncmp(firstTest4, secondTest4, 10));
// 	printf("%d\n", strncmp(firstTest5, secondTest5, 10));
// 	printf("%d\n", ft_strncmp(firstTest5, secondTest5, 10));


// 	return(0);
// }

// int test_strnstr ()
// {	
// 	const char littletest1[20] = "    ";
// 	const char littletest2[20] = "";
// 	const char littletest3[20] = "bobo";


// 	const char bigtest1[20] = "dsjc    dsjalka";
// 	const char bigtest2[20] = "dsjc    dsjalka";
// 	const char bigtest3[10] = "dsjc    ";

// 	printf("%s\n", strnstr(bigtest1, littletest1, 20));
// 	printf("%s\n", ft_strnstr(bigtest2, littletest1, 20));
// 	printf("%s\n", strnstr(bigtest2, littletest2, 20));
// 	printf("%s\n", ft_strnstr(bigtest2, littletest2, 20));
// 	printf("%s\n", strnstr(bigtest3, littletest3, 20));
// 	printf("%s\n", ft_strnstr(bigtest3, littletest3, 20));

// 	return (0);
// }


// int test_strrchr ()
// {

// 	char test1[30] = "?ent the two following? func";
// 	const char test2[30] = "ent the two/ following/ func";	
// 	const char test3[30] = "ent the two following func";
// 	const char test4[30] = " \0djd\0ioewj";	

// 	printf("%s\n", ft_strrchr(test1, '?'));
// 	printf("%s\n", ft_strrchr(test2, '/'));
// 	printf("%s\n", ft_strrchr(test3, '!'));
// 	printf("%s\n", ft_strrchr(test4, '\0'));

// 	return (0);
// }


// int test_strtrim()
// {
// 	const char firstTest1[10] = "ABAABA";
// 	const char firstTest2[10] = "AABA!AAB";
// 	const char firstTest3[10] = "ABA ABA";
// 	const char firstTest4[10] = "AA ABA";
// 	const char firstTest5[10] = "ABA ABA";
// 	const char firstTest6[15] = "ello World";
// 	const char firstTest7[10] = " ABA ABA ";
// 	const char firstTest8[10] = "ABA ABA ";

// 	const char secondTest1[10] = "A";
// 	const char secondTest2[10] = "AB";
// 	const char secondTest3[10] = "BA";
// 	const char secondTest4[10] = "A ";
// 	const char secondTest5[9] = "ABA ";
// 	const char secondTest6[9] = "eld";
// 	const char secondTest7[10] = "AB";
// 	const char secondTest8[10] = "BA";

// 	printf("%s\n", ft_strtrim(firstTest1, secondTest1));
// 	printf("%s\n", ft_strtrim(firstTest2, secondTest2));
// 	printf("%s\n", ft_strtrim(firstTest3, secondTest3));
// 	printf("%s\n", ft_strtrim(firstTest4, secondTest4));
// 	printf("%s\n", ft_strtrim(firstTest5, secondTest5));
// 	printf("%s\n", ft_strtrim(firstTest6, secondTest6));

// 	return(0);
// }

// int test_substr()
// {
// 	const char firstTest1[10] = "ABA ABA";

// 	printf("%s\n", ft_substr(firstTest1, 2, 2));
// 	printf("%s\n", ft_substr(firstTest1, 1, 1));
// 	printf("%s\n", ft_substr(firstTest1, 2, 3));
// 	printf("%s\n", ft_substr(firstTest1, 5, 0));
// 	printf("%s\n", ft_substr(firstTest1, 5, 3));

// 	return(0);
// }


// int test_tolower ()
// {	
// 	int var1 = 'c';
// 	int var2 = 'C';
// 	int var3 = ';';
// 	int var4 = '[';

// 	printf("The result is %c\n", ft_tolower(var1));
// 	printf("The result is %c\n", ft_tolower(var2));
// 	printf("The result is %c\n", ft_tolower(var3));
// 	printf("The result is %c\n", ft_tolower(var4));

// 	return(0);
// }


// int test_toupper ()
// {
// 	int var1 = 'c';
// 	int var2 = '4';
// 	int var3 = ';';
// 	int var4 = 'L';

// 	printf("The Result is %c\n", ft_toupper(var1));
// 	printf("The Result is %c\n", ft_toupper(var2));
// 	printf("The Result is %c\n", ft_toupper(var3));
// 	printf("The Result is %c\n", ft_toupper(var4));

	
// 	return(0);
// }



int main()
{
	// test_strlcat();

	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

	// printf("%ld\n", strlcpy(dest, src, -1));
	printf("%ld\n", ft_strlcpy(dest, src, -1));


	return(0);
}