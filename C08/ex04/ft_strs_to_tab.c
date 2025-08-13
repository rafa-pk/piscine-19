/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:32:15 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/13 16:43:37 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

/*typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!array)
	{
		free(array);
		return (NULL);
	}
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[ac].size = 0;
	array[ac].str = NULL;
	array[ac].copy = NULL;
	return (array);
}
/*
int	main(void)
{
	
	char	*array[] = {"Hello", "World", "Piscine"};
	int		ac = 3;
	int		i = 0;

	t_stock_str	*struct_array = ft_strs_to_tab(ac, array);
	while (struct_array[i].str != NULL)
	{
		printf("Struct %d:\n", i);
		printf("-Size of str: %d\n", struct_array[i].size);
		printf("-Str: %s\n", struct_array[i].str);
		printf("-Str copy: %s\n", struct_array[i].copy);
		i++;
	}
	i = 0;
	while (i < ac)
	{
		free(struct_array[i].copy);
		i++;
	}
	free(struct_array);
	return (0);
}*/
