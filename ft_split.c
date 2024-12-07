/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:06:32 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/07 10:21:02 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	ft_count_parts(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (s[i++])
	{
		if ((s[i] == c || count == 0) && s[i - 1] != c)
			count++;
	}
	return (count);
}

static	int	get_lil_len(const char *s, char c)
{
	int	lil_len;

	lil_len = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		lil_len++;
	}
	return (lil_len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**new;
	int		count;

	i = 0;
	count = ft_count_parts(s, c);
	new = (char **)malloc(sizeof new * (ft_count_parts(s, c) + 1));
	if (new == NULL)
		return (NULL);
	while (i < count + 1)
	{
		new[i] = ft_substr(s, 0, get_lil_len(s, c));
		if (new[i] == NULL)
			return (NULL);
		s += get_lil_len(s, c);
		while (*s == c)
			s++;
		i++;
	}
	new[i] = NULL;
	return (new);
}
