/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:53:26 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/06 13:16:21 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (i < ft_strlen((char *)str) + 1)
	{
		if (str[i] == c)
		{
			return (&((char *)str)[i]);
		}
		i++;
	}
	return (NULL);
}
