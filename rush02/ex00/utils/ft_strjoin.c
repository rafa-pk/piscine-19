/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:01:48 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/23 15:10:06 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*ft_strjoin(char *str, char *buff)
{
	int	i;
	int	j;
	char	*merge;

	i = 0;
	j = 0;
	merge = malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(buff) + 1));
	if (!merge)
	{
		free(merge);
		return (NULL);
	}
	while (str[i])
	{
		merge[i] = str[i];
		i++;
	}
	while (buff[j] && buff[j] != '\n')
	{
		merge[i + j] = buff[j];
		j++;
	}
	if (buff[j] == '\n')
		merge[i + j] = '\0';
	return (merge);
}
