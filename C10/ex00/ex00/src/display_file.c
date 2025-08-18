/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:38:36 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/18 08:29:40 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	display_file(char *filename)
{
	int		fd;
	int		byte_count;
	char	buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (1);
	while ((byte_count = read(fd, buffer, sizeof(buffer))))
	{
		if (byte_count < 0)
			return (-1);
		write(1, buffer, byte_count);
	}
	close (fd);
	return (0);
}
