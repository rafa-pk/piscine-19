/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:10:09 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/19 10:49:14 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_cat(char *filename)
{
	int	fd;
	int	byte_count;
	char	buff[BUFF_SIZE];

	fd = open(basename(filename), O_RDONLY);
	if (fd < 0)
	{
		if (errno == ENOENT)
			handle_errors("invalid read", filename);
		handle_errors("invalid file", filename);
		return (-1);
	}
	while ((byte_count = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (byte_count < 0)
			return (-1);
		write(1, buff, byte_count);
	}
	close (fd);
	return (0);
}


