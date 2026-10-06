
#include "libft.h"
// #include <stdio.h>
// #include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    size_t              i;

    p = (const unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (p[i] == (unsigned char)c)
            return ((void *)(p + i));
        i++;
    }
    return (NULL);
}


// void *ft_memchr(const void *s, int c, size_t n);

// int main(void)
// {
//     char    s[] = "hello";
//     char    data[] = {'a', '\0', 'b', 'c'};
//     char    *p;

//     p = ft_memchr(s, 'l', 5);
//     if (p)
//         printf("found, index %td, rest: %s\n", p - s, p);
//     else
//         printf("not found\n");

//     p = ft_memchr(s, 'z', 5);
//     if (p)
//         printf("found\n");
//     else
//         printf("not found\n");

//     p = ft_memchr(data, 'c', 4);
//     if (p)
//         printf("found, index %td\n", p - data);
//     else
//         printf("not found\n");

//     return (0);
// }
