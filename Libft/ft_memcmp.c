//#include <stdio.h>

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i = 0;
    while(i < n)
    {
        if(((char *)s1)[i] > ((char *)s2)[i])
        {
            return(1);
        }
        else if(((char *)s1)[i] < ((char *)s2)[i])
        {
            return(-1);
        }
        i++;
    }
    return (0);
}
// int main(void)
// {
//    char s1[] = "ab";
//     char s2[] = "ac";
//     int h = ft_memcmp(s1 , s2 , 3);
//     printf("%d", h);
// }
