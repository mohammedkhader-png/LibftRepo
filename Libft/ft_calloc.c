#include "libft.h"
//#include <stdio.h>
void* ft_calloc( size_t count, size_t size )
{
    void *c = malloc(count * size);
    if(c == NULL)
    {
        return NULL;
    }
    ft_bzero(c, count * size);
    return (c);
}
// int main(void)
// {
//     int *arr;
//     int i;

//     arr = ft_calloc(5, sizeof(int));
//     if (!arr)
//     {
//         printf("calloc failed\n");
//         return (1);
//     }

//     i = 0;
//     while (i < 5)
//     {
//         printf("arr[%d] = %d\n", i, arr[i]);
//         i++;
//     }

//     free(arr);
//     return (0);
// }
