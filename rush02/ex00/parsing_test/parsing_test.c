/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:48:45 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/23 23:51:47 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

typedef struct	s_entry
{
	char	*num;
	char	*num_str;
}	t_entry;

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	printnb(char *nb, t_entry *entry)
{
	int	i;

	i = 0;
	while (entry[i]. num != NULL)
	{
		if (!ft_strcmp(nb, entry[i].num))
			ft_putstr(entry[i].num_str);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	int		fd;
	t_entry	*entry[5];
	int		byte_count;
	char	number[2];
	char	nbstr[10];
	char	buff[1024];

	(void)ac;
	i = 0;
	j = 0;
	fd = open(av[2], O_RDONLY);
	byte_count = read(fd, buff, sizeof(buff));
	if (byte_count < 0)
		return (1);
	while (buff[i])
	{
		number[i] == buff[i];
		if (buff[i] == ":")
		{
			entry[i].num = number;
		}
		i++;
	}
	j = 0;
	while (buff[i])
	{
		nbstr[j] == buff[i];
		j++;
		i++;
	}
	entry[i].num_str = nbstr;
	printnb(av[1], entry);	
	return (0);
}

