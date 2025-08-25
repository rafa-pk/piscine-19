/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_shifter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:23:03 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/25 16:38:42 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

char	*buff_shifter(char *buff)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] == '\n')
		i++;
	while (buff[i])
	{
		buff[start] = buff[i];
		start++;
		i++;
	}
	while (start < BUFF_SIZE)
	{
		buff[start] = '\0';
		start++;
	}
	return (buff);
}
