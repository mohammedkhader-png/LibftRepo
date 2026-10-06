/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mo <mo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 21:03:31 by mo                #+#    #+#             */
/*   Updated: 2026/10/05 16:59:47 by mo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void* ft_memmove( void* dest, const void* src, size_t count )
{
    unsigned char *temp = malloc(sizeof(char) * count);
    size_t l = 0;
    while(l < count)
    {
        ((unsigned char *)temp)[l] = ((unsigned char *)src)[l];
        l++;
    }
    size_t i = 0; 
    while(i < count)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)temp)[i];
        i++;
    }
    free(temp);
    return(dest);
}

// int main(void)
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int b[5] = {1, 2, 3, 4, 5};
//     int i;

//     ft_memmove(a + 2, a, 3 * sizeof(int));   // dst > src, overlapping
//      memmove(b + 2, b, 3 * sizeof(int));      // real one, for comparison

//     i = 0;
//     while (i < 5)
//     {
//         printf("mine: %d  real: %d\n", a[i], b[i]);
//         i++;
//     }
//     return (0);
// }