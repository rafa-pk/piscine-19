/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:55:05 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/25 16:40:35 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"
#include <stdio.h>

char	*read_line(int	fd)
{
	static char	buff[BUFF_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFF_SIZE <= 0)
		return (NULL);
	while (buff[0] != '\0' || read(fd, buff, BUFF_SIZE) > 0)
	{
		line = ft_strjoin(line, buff);
		if (!line)
			return (NULL);
		buff_shifter(buff);
		if (line[ft_strlen(str) - 1] == '\n')
			return (line);
	}
	return (line);
}

//int	map_checks(char *filename)
//{
//	
//}
//

int	main(void)
{
	int	fd;

	fd = open("../maps/testmap.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	printf("%s\n", read_line(fd));
	return (0);
}
