/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:33:38 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/09 18:09:44 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
        size_t                  i;
        unsigned char   *ptr;

        i = 0;
        ptr = (unsigned char *)str;
        while (i < n)
        {
                if (ptr[i] == (char)c)
                {
                        return (&((void *)ptr)[i]);
                }
                i++;
        }
        return (NULL);
}
