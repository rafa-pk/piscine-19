/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:07:53 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/19 09:29:31 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

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

void	handle_errors(char *error, char *location)
{
	if (!ft_strcmp(error, "invalid file"))
	{
		write(1, "cat: ", 5);
		ft_putstr(location);
		write(1, ": No such file or directory.\n", 29);
	}
	else if (!ft_strcmp(error, "invalid read"))
	{
		write(1, "cat: ", 5);
		ft_putstr(location);
		write(1, ": Permission denied.\n", 23);
	}
}
