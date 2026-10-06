#include "libft.h"
//#include <stdio.h>
char *ft_strdup(const char *s)
{
    size_t i = 0;
    size_t si = ft_strlen(s);
    char *mal = malloc(si);
    while(s[i] != '\0' )
    {
        mal[i] = s[i];
        i++;
    }
    return(&mal[0]);


}
// int main(void)
// {
//     char s[] = "hello";
//     char *hello = ft_strdup(s);
//     printf("%s",hello);
// }