/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:45:53 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/17 12:20:01 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	sep_in_str(char sep, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (sep == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	tablen(char *str, char *charset)
{
	int	i;
	int	num_of_strs;

	i = 0;
	num_of_strs = 0;
	while (str[i])
	{
		if (sep_in_str(str[i], charset))
		{
			num_of_strs++;
			while (str[i] && sep_in_str(str[i], charset))
				i++;
		}
		i++;
	}
	return (num_of_strs + 1);
}

char	*ft_strdup(char *str, int *ix, char *charset)
{
	int		i;
	int		len;
	char	*substr;

	i = 0;
	len = 0;
	while (str[*ix + len] && !sep_in_str(str[*ix + len], charset))
		len++;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = str[*ix];
		(*ix)++;
		i++;
	}
	substr[i] = '\0';
	while (str[*ix] && sep_in_str(str[*ix], charset))
		(*ix)++;
	return (substr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		ix;
	int		strcount;
	char	**table;

	i = 0;
	ix = 0;
	strcount = tablen(str, charset);
	table = malloc(sizeof(char *) * (strcount + 1));
	if (!table)
		return (NULL);
	while (i < strcount)
	{
		table[i] = ft_strdup(str, &ix, charset);
		i++;
	}
	table[i] = NULL;
	return (table);
}
/*
int	main(void)
{
	char	str[] = "ca dis quoi   le(s";
	char	sep[] = " (";
	char	**table = ft_split(str, sep);
	int	i = 0;

	while (i < 6)
	{
		printf("table[%d]: %s\n", i, table[i]);
		i++;
	}
	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
	return (0);
}*/
