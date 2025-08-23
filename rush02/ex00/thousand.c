/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thousand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdouny <cdouny@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:04:10 by cdouny            #+#    #+#             */
/*   Updated: 2025/08/23 15:52:52 by cdouny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	**thou_parse(char *av)
{
	char		**res;
	int			i;
	char		*str;
	int			j;
	
	i = 0;
	j = 0;
	res = malloc(sizeof(char *)* (thou_count(av) + 1))
		if(!res)
			return(NULL);
	while (i < (thou_count(av)))
	{
		j = 0
		while (j < 3)
		{
			res[i][j] = str[(i * 3) + j];
			j++;
		}
		i++;
	}
}

int	thou_count(char *str)
{
	int	i;
	int	count;

	i = ft_strlen(str);
	if (i % 3 != 0)
		count = (i / 3)+ 1;
	else 
		count = i / 3;
	return(count);
}
