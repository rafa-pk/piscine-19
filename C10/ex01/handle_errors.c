/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:07:53 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/19 11:49:43 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_putstr(char *str, char *add)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (add[i])
	{
		write(1, &add[i], 1);
		i++;
	}
}

void	handle_errors(char *location, int error)
{
	write(1, "cat: ", 5);
	if (ft_strcmp(location, ""))
		ft_putstr(location, ": ");
	if (errno == ENOENT)
		ft_putstr(strerror(errno), "\n");
	else if (errno == EISDIR)
		ft_putstr(strerror(errno), "\n");
	else if (errno == EACCES)
		ft_putstr(strerror(errno), "\n");
	else if (errno == EBADF)
		ft_putstr(strerror(errno), "\n");
	else if (errno == EFBIG)
		ft_putstr(strerror(errno), "\n");
	else if (errno == EIO)
		ft_putstr(strerror(errno), "\n");
	else if (errno == EINTR)
		ft_putstr(strerror(errno), "\n");
	else
		write(1, "Unexpected error\n", 17);
}
