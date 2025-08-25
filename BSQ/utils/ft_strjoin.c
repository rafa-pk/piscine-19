/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:58:45 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/25 16:38:59 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

char	*ft_strjoin(char *line, char *buff)
{
	int	i;
	int	j;
	char	*merge;

	merge = malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) + 1));
	if (!merge)
	{
		free(merge);
		return(NULL);
	}
	while (line[i])
	{
		merge[i] = line[i];
		i++;
	}
	while (buff[j] && buff[j] != '\n')
	{
		merge[i + j] = buff[i + j];
		j++;
	}
	if (merge[i + j] == '\n')
		merge[i + j++] = '\n';
	merge[i + j] == '\0';
	free(str);
	return (merge);
}
