/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:53:26 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/09 17:35:23 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
        int     i;

        i = 0;
        while (i < ft_strlen((char *)str))
        {
                if (str[i] == c)
                {
                        return (&((char *)str)[i]);
                }
                i++;
        }
        if (c == '\0')
                return (&((char *)str)[i]);
        return (NULL);
}
