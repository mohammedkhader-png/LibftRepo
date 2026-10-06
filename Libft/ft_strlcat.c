#include "libft.h"
// #include <stdio.h>
// #include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  len = ft_strlen(dest);
    size_t  len2 = ft_strlen(src);
    size_t  i = 0;

    if (size <= len)
        return (size + len2);
    while (src[i] != '\0' && len < size - 1)
    {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';
    return (ft_strlen(dest) + len2 - i);
}


// int main(void)
// {
//     char    a[10] = "Hi ";
//     char    b[10] = "Hi ";
//     char    c[10] = "Hi ";
//     size_t  r;

//     // Case 1: everything fits
//     r = ft_strlcat(a, "there", sizeof(a));
//     printf("fits:      [%s] r = %zu\n", a, r);

//     // Case 2: doesn't fit, gets cut off
//     r = ft_strlcat(b, "everyone", sizeof(b));
//     printf("truncated: [%s] r = %zu\n", b, r);

//     // Case 3: size smaller than dst already is, nothing is copied
//     r = ft_strlcat(c, "there", 2);
//     printf("full:      [%s] r = %zu\n", c, r);

//     return (0);
// }