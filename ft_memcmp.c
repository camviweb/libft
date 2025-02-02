/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:26:25 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/06 13:29:20 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (str1[i] - str2[i]);
}
