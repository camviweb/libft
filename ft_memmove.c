/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:36:52 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/06 12:54:09 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)src;
	while (i < size)
	{
		((char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
