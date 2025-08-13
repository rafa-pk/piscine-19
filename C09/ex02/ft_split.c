/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:23:31 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/13 18:03:06 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
 * Plan datak:
 * parser str et compter combien de strings il y a
 * compter combien de chars par string
 * allouer taille totale du tableau + 1
 * parcourir le tableau tant quil est valide
 *a chaque entree du tableau y foutre un string
 *mettre derniere entree a NULL pour marquer la fin du tableau
*/
									//TODO chaque char dans charset separe une fois, pas tout les chars
int	ft_cust_strstr(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] = charset[0])
		{
			while (str[i + j] && str[i + j] == charset[j])
				j++;
			if (charset[j] == '\0')
				count++;
		}
	}
	return (count);
}

char	**alloc_table(char *str, char *charset)
{
	int	str_count;
	char	**table
	
	str_count = ft_cust_strstr(str, charset) + 1;
	table = malloc(sizeof(char	*) * (str_count + 1));
	if (!table)
		return (NULL);
	table[str_count] = NULL;
	return (table);
}

char	*ft_cust_strdup(char *str, int *ix, char *charset)
{
	int	i;
	int	count;

	i = 0
	while (str[ix])
	{
		substr[i] = str[ix];
		i++;
		ix++;
	}
	substr = '\0';
	ix += ft_strlen(charset);
	return (substr);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	ix;
	char	**table;

	i = 0;
	ix = 0;
	table = alloc_table(char *str, char *charset);
	while (table[i] != NULL)	//parcours le tableau
	{
		table[i] = ft_cust_strdup(str, &ix, charset); //copie str apd de ix jusqua charset, saute jusquau str dapres
		i++;
	}
	return (table);
}
