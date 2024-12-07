/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:28:28 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/06 14:51:10 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	get_len(int n)
{
	int	len;

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
	return (len);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		len;
	int		i;

	i = 0;
	len = get_len(n);
	new = malloc (sizeof * new * len);
	if (new == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		new[i] = '-';
		i++;
	}
	while (n > 0)
	{
		new[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (new);
}
