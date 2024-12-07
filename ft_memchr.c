/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:33:38 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/06 13:23:52 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *)str) + 1;
	while (i < len && i < n)
	{
		if (((unsigned char *)str)[i] == c)
		{
			return (&((unsigned char *)str)[i]);
		}
		i++;
	}
	return (NULL);
}
