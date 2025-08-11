/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:50:14 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/11 18:08:00 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int	table_alloc(int size, char **strs, char *sep, int *str)
{
	int	alloc;

	alloc = 0;
	while (*str < size)
	{
		alloc += ft_strlen(strs[*str]);
		(*str)++;
	}
	alloc += ft_strlen(sep) * (size - 1);
	alloc++;
	return (alloc);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str;
	char	*str_joined;

	str = 0;
	if (size == 0)
	{
		str_joined = malloc(sizeof(char));
		if (!str_joined)
			return (NULL);
		str_joined[0] = 0;
		return (str_joined);
	}
	str_joined = malloc(sizeof(char) * table_alloc(size, strs, sep, &str));
	if (!str_joined)
		return (NULL);
	str = 0;
	while (str < size)
	{
		ft_strcat(str_joined, strs[str]);
		if (str < size - 1)
			ft_strcat(str_joined, sep);
		str++;
	}
	return (str_joined);
}
/*
int	main(void)
{
	char	*strs[] = {"wesh", "wesh", "canapeche"};
	char	sep[] = "()";
	int	size = 3;

	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);	
}*/
