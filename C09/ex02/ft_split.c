/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:56:42 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/14 18:58:13 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	int	strs_to_alloc;

	i = 0;
	strs_to_alloc = 0;
	while (str[i])
	{
		if (!char_in_set(str[i], charset))
		{
			strs_to_alloc++;
			while (str[i] && !char_in_set(str[i], charset))
				i++;
		}
		i++;
	}
	return (strs_to_alloc + 1);
}

char	*ft_strdup(char *str, int *ix, char *charset)
{
	int		i;
	int		len;
	char	*substr;

	i = 0;
	len = 0;
	while (char_in_set(str[*ix + len], charset))
		len++;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (*ix < len)
	{
		substr[i] = str[*ix];
		(*ix)++;
		i++;
	}
	substr[i] = '\0';
	while (!char_in_set(str[*ix], charset))
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
	table = malloc(sizeof(char	*) * (strcount + 1));
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

int	main(void)
{
	char	str[] = "wesh, wesh, canapeche";
	char	charset[] = ", ";
	char	**table = ft_split(str, charset);
	int		i = 0;
	
	while (i < 4)
	{
		printf("table[%d]: %s\n", i, table[i]);
		i++;
	}
	while (i >= 0)
	{
		free(table[i]);
		i--;
	}
	free(table);
	return (0);
}
