/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:21:03 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/24 22:23:57 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	char_in_set(char sep, char *charset)
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
	int	word;
	int	strs_to_alloc;

	i = 0;
	word = 0;
	strs_to_alloc = 0;
	while (str[i])
	{
		if (!char_in_set(str[i], charset))
		{
			if (!word)
			{
				word = 1;
				strs_to_alloc++;
			}
		}
		else
			word = 0;
		i++;
	}
	return (strs_to_alloc);
}

char	*ft_strndup(char *str, int *ix, char *charset)
{
	int		i;
	int		len;
	char	*substr;

	i = 0;
	len = 0;
	while (str[*ix] && char_in_set(str[*ix], charset))
		(*ix)++;
	while (str[*ix + len] && !char_in_set(str[*ix + len], charset))
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
		table[i] = ft_strndup(str, &ix, charset);
		i++;
	}
	table[i] = NULL;
	return (table);
}
