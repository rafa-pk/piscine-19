/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_and_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:53:14 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/18 15:36:37 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	read_input(char *buff, int size)
{
	int	byte_count;

	byte_count = read(0, buff, size - 1);
	if (byte_count > 0)
		buff[byte_count] = '\0';
	else if (byte_count == 0)
		buff[0] = '\0';
	return (byte_count);
}

int	scan_and_print(void)
{
	int	i;
	char	buff[BUFF_SIZE];

	i = 0;
	if (read_input(buff, BUFF_SIZE) < 0)
		return (-1);
	while (buff[i])
	{
		write(1, &buff[i], 1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	scan_and_print();
	return (0);
}*/
