[header]

/* #include "libft.h" */

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}
