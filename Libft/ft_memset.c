//#include <string.h>
//#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i = 0;
    while(s != NULL && i < n)
    {
        ((char * )s)[i]= c;
        i++;
    }
    return (s);
}

// int main(void)
// {
// int arr[5] = {1, 2, 2, 2, 8};
// memset(str , 0 , 3);
// printf("%s \n" , str);
// }

   
