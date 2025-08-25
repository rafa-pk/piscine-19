/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:05:16 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/24 22:11:21 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	rush02(char *nbr, char *dictionary)
{
	char	buff[BUFF_SIZE];
	int		size;
	int		i;
	t_entry	*entries;

	i = 0;
	size = 0;
	if (read_file(dictionary, buff))
		return (1);
	entries = parse_buff(buff);
	if (!&parse_buff)
		return (0);
	while (entries[size].num || entries[size].num_str)
		size++;
	print_large_number(nbr, entries);
	while (i < size)
	{
		free(entries[i].num);
		free(entries[i].num_str);
		i++;
	}
	free(entries);
	return (SUCCESS);
}
