/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:36:52 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/09 16:54:40 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void    *ft_memmove(void *dst, const void *src, size_t size)
{
        size_t  i;

        i = 0;
        if (dst > src)
        {
                i = size - 1;
                while (i >= 0)
                {
                        ((char *)dst)[i] = ((char *)src)[i];
                        i--;
                }
        }
        else
        {
                while (i < size)
                {
                        ((char *)dst)[i] = ((char *)src)[i];
                        i++;
                }
        }
        return (dst);
}
~
