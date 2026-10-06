/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mo <mo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 01:57:03 by mo                #+#    #+#             */
/*   Updated: 2026/10/01 23:10:23 by mo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen( const char* str )
{
int counter = 0;
    while(str[counter] != '\0')
    {
       counter++;
    }
    return counter;
    
}
// int main(void)
// {
//     size_t c = strlen("hello world");
//     printf("%zu",c);
   
// }