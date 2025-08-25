/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:03:33 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/24 22:18:27 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>

char	*find_word(int val, t_entry *entries, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (*(entries[i].num) == val)
			return (entries[i].num_str);
		i++;
	}
	return (NULL);
}

void	print_hundreds(int n, t_entry *entries, int size)
{
	if (n == 0)
		return ;
	if (n >= 100)
	{
		ft_putstr(find_word(n / 100, entries, size));
		ft_putstr(" ");
		ft_putstr(find_word(100, entries, size));
		n %= 100;
		if (n != 0)
			ft_putstr(" ");
	}
	if (n >= 20)
	{
		ft_putstr(find_word((n / 10) * 10, entries, size));
		n %= 10;
		if (n != 0)
		{
			ft_putstr(" ");
			ft_putstr(find_word(n, entries, size));
		}
	}
	else if (n > 0)
	{
		ft_putstr(find_word(n, entries, size));
	}
}

void	extract_chunk(char *dest, char *src, int count)
{
	int	i;

	i = 0;
	while (i < count && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	print_chunk_group(char *chunk, int index, int total, t_entry *dict)
{
	int	val;
	int	size;
	int	power;

	val = ft_atoi(chunk);
	if (val == 0)
		return ;
	size = 0;
	while (dict[size].num || dict[size].num_str)
		size++;
	print_hundreds(val, dict, size);
	power = (total - index - 1) * 3;
	if (power > 0)
	{
		ft_putstr(" ");
		ft_putstr(find_word(power, dict, size));
	}
	if (index != total - 1)
		ft_putstr(" ");
}

void	print_large_number(char *num_str, t_entry *dict)
{
	int		len;
	int		i;
	int		start;
	int		groups;
	char	chunk[4];

	len = 0;
	i = 0;
	start = 0;
	groups = 0;
	while (num_str[len])
		len++;
	groups = (len + 2) / 3;
	start = len % 3;
	if (start == 0)
		start = 3;
	while (i < groups)
	{
		extract_chunk(chunk, num_str, start);
		num_str += start;
		start = 3;
		print_chunk_group(chunk, i, groups, dict);
		i++;
	}
}
