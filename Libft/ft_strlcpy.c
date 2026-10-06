
#include "libft.h"
//#include <stdio.h>


size_t ft_strlcpy(char *dst , const char *src , size_t size)
{
    size_t len = ft_strlen(src);
    size_t i = 0;
    while(src[i] != '\0' && i < size - 1)
    {
            dst[i] = src[i];
            i++;
    }
    dst[i] = '\0';
    return(len);
}

// int main(void)
// {
//     char dst[10] = "hello";
//     const char *src = "world";
//     printf("%zu",ft_strlcpy(dst , src , 3));

// }