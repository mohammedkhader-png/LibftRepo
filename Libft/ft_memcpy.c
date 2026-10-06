/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mo <mo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:19:42 by mo                #+#    #+#             */
/*   Updated: 2026/10/01 18:10:56 by mo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void* ft_memcpy( void* dest, const void* src, size_t count )
{
    int i = 0;
    while(i < count)
    {
      ((unsigned char *) dest)[i] = ((unsigned char *)src)[i];
      i++;
    }
    return (dest);
}

// int main(void)
// {
//   char src[] = "hello";
//   char dest[20];
//   size_t count = 4;
//   char *ret;
//   ret = ft_memcpy(dest , src , count);
//     printf("%s \n",ret);
// }