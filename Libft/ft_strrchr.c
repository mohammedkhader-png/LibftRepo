
#include "libft.h"
//#include <stdio.h>
size_t strlen( const char* str )
{
int counter = 0;
    while(str[counter] != '\0')
    {
       counter++;
    }
    return counter;
    
}


char *ft_strrchr(const char *s, int c)
{
    size_t size = strlen(s);
    while(s[size] != '\0')
    {
        if(s[size] == c)
        {
            return (char* )&s[size];
        }
        size--;
    }
    return NULL;
}

// int main(void)
// {
//     char *res;

//     // Test 1: Match at start
//     res = strrchr("hello", 'h');
//     printf("Result 1: %s\n", res ? res : "NULL");

//     // Test 2: Match in middle
//     res = strrchr("hello", 'l');
//     printf("Result 2: %s\n", res ? res : "NULL");

//     // Test 3: Not found
//     res = strrchr("catcat", 'a');
//     printf("Result 3: %s\n", res ? res : "NULL");

//     return 0;   
// }