
#include "libft.h"
//#include <stdio.h>
char *ft_strnstr( char *s1 ,  char *s2 , size_t n)
{
    int i = 0;
    int j;
    int k;
    int p;
    while(s1[i] != '\0' && i < n)
    {
        j = 0;
        p = i;
        while(s1[i] == s2[j])
        {
            i++;
            j++;
        }
         if(s2[j] == '\0')
            {
                s1[n] = '\0';
                return (&s1[p]);
            }
        i = p;
        i++;
    }
    return (NULL);
}

// int main(void)
// {
//     char a[] = "hello";
//     char b[] = "hello";
//     char *abo = ft_strnstr(a , b , 5);
//     printf("%s", abo);
// }