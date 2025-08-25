/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 21:18:15 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/24 22:12:24 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	free_all(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
}

int	read_file(char *file, char *buff)
{
	int	fd;
	int	bc;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (1);
	bc = read(fd, buff, BUFF_SIZE - 1);
	if (bc < 0)
		return (1);
	buff[bc] = '\0';
	close(fd);
	return (0);
}

int	*atoiarr(char *nb)
{
	int	i;
	int	len;
	int	*nbr;

	i = 0;
	len = ft_strlen(nb);
	nbr = malloc(sizeof(int) * (len + 1));
	if (!nbr)
		return (NULL);
	while (i < len)
	{
		nbr[i] = nb[i] - '0';
		i++;
	}
	nbr[len] = -1;
	return (nbr);
}

t_entry	*parse_buff(char *buff)
{
	int		i;
	char	**buff_table;
	char	**line;
	t_entry	*entries;

	i = 0;
	entries = malloc(sizeof(t_entry) * 42);
	if (!entries)
		return (NULL);
	buff_table = ft_split(buff, "\n");
	while (buff_table[i])
	{
		line = ft_split(buff_table[i], ": ");
		entries[i].num = atoiarr(line[0]);
		entries[i].num_str = ft_strdup(line[1]);
		free_all(line);
		i++;
	}
	free_all(buff_table);
	entries[i].num = 0;
	entries[i].num_str = NULL;
	return (entries);
}

/*
int	main(void)
{
	int	i = 0;
	//int	j = 0;
	char	buff[BUFF_SIZE];
	t_entry	*entries;

	//(void)ac;
	if (read_file("numbers.dict", buff))
		return (1);
	entries = parse_buff(buff);
	while (entries[i].num_str != NULL)
	{
	//	printf("entry[%d].num:", i);
	//	while (j < 10)
	//	{
	//		printf("%d", entries[i].num[j]);
	//		j++;
	//	}
	//	printf("\n");
		printf("entry[%d].num_str: %s\n", i, entries[i].num_str);
		free(entries[i].num);
		free(entries[i].num_str);
		i++;
	}
	free(entries);
	return (0);
}*/
