/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:42:59 by canguyen          #+#    #+#             */
/*   Updated: 2024/11/06 14:24:48 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		j++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		j;

	j = 0;
	dup = malloc(sizeof * dup * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
