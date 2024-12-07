/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:09:52 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/06 14:13:02 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strjoin = malloc(sizeof * strjoin * \
			(ft_strlen((char *)s1) + ft_strlen((char *)s2)));
	if (strjoin == NULL)
		return (NULL);
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		strjoin[i] = s2[j];
		i++;
		j++;
	}
	return (strjoin);
}