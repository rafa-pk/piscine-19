/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:04:28 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/23 14:50:05 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*read_line(int fd)
{
	char	*str;
	static char	buff[BUFF_SIZE + 1];

	if (fd < 0 || BUFF_SIZE <= 0)
		return (NULL);
	str = NULL;
	while (buff[0] != '\0'|| read(fd, buff, BUFF_SIZE) > 0)
	{
		str = ft_strjoin(str, buff);
		if (!str)
			return (NULL);
		buff_cleaner(buff);
		if (str[ft_strlen(str) - 1] == '\n')
			return (str);
	}
	return (str);
}

t_entry	**file_parser(char *dictionary)
{
	int	i;
	int	fd;
	char	*line;
	char	**split_ret;
	t_entry	**entries;

	i = 0;
	fd = open(dictionary, O_RDONLY);
	entries = malloc(sizeof(t_entry) * 42)	//TODO faire fonction qui compte nombre de ligne sans que ce sois redondant
	if (!entries)
		return (NULL);
	line = read_line(fd);
	while (read_line(fd) != NULL)
	{
		split_ret = ft_split(line, ": ");
		entries[i].num = ft_strdup(split_ret[0]);
		entries[i].num_str = ft_strdup(split_ret[1]);
		free(line);										//TODO comprendre comment bien tout free
		line = read_line(fd);
		i++;
	}
	t_entry[i].num = 0;
	t_entry[i].num_str = NULL;
	return (entries);
}
