/* **************i************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:28:28 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/09 15:51:18 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static  int     get_len(int n)
{
        int     len;

        len = 0;
        if (n < 0)
        {
                len++;
                n = -n;
        }
        while (n > 0)
        {
                n = n / 10;
                len++;
        }
        if (n == 0)
                len = 1;
        len++;
        return (len);
}

static  char    *ft_start(int n)
{
        char    *new;

        new = malloc(sizeof * new * (get_len(n)));
        if (new == NULL)
                return (NULL);
        return (new);
}

char    *ft_itoa(int n)
{
        char    *new;
        int             ilen;

        ilen = get_len(n);
        new = ft_start(n);
        if (n == 0)
                new[0] = '0';
        if (n < 0)
        {
                new[0] = '-';
                n = -n;
        }
        new[--ilen] = '\0';
        while (n > 0)
        {
                new[--ilen] = n % 10 + '0';
                n = n / 10;
        }
        return (new);
}
