/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:06:32 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/09 19:38:35 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	ft_count_parts(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[0] == '\0')
		return (1);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
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

static	char	**ft_malloc(char const *s, char c)
{
	char	**new;

	new = (char **)malloc(sizeof * new * (ft_count_parts(s, c) + 1));
	if (new == NULL)
		return (NULL);
	return (new);
}

static	char	**ft_free(char **new)
{
	while (*new)
	{
		free(*new);
		new++;
	}
	free(new);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**new;
	int		count;

	if (s[0] == '\0')
		return (NULL);
	new = ft_malloc(s, c);
	if (!new)
		return (NULL);
	i = 0;
	count = ft_count_parts(s, c);
	while (i < count)
	{
		new[i] = ft_substr(s, 0, get_lil_len(s, c));
		if (!new[i])
			return (ft_free(new));
		s += get_lil_len(s, c);
		while (*s == c && *s != '\0')
			s++;
		i++;
	}
	new[i] = NULL;
	return (new);
}
