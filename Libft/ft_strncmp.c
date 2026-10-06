

#include "libft.h"
//#include <stdio.h>
int ft_strncmp(const char s1[], const char s2[], size_t n)
{
    int i = 0;

    while(s1[i] != '\0' && i < n)
    {
        if(s1[i] > s2[i])
        {
            return(1);
        }
        else if(s1[i] < s2[i])
        {
            return(-1);
        }
        i++;
    }
    return(0);
    
    
}

// int main(void)
// {
//     char s1[] = "Hello";
//     char s2[] = "HeLlo";
//     printf("%d" , ft_strncmp(s1 , s2 , 3));
// }