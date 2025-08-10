/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:02:57 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/10 16:59:44 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	corner_cases(int x, int y, int ligne, int col)
{
	if (col == 0 && ligne == 0)
	{
		ft_putchar('/');
		return (1);
	}
	if (col == 0 && ligne == y - 1)
	{
		ft_putchar('\\');
		return (1);
	}
	if (ligne == 0 && col == x - 1)
	{
		ft_putchar('\\');
		return (1);
	}
	if (col == x - 1 && ligne == y - 1)
	{
		ft_putchar('/');
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	ligne;
	int	col;

	ligne = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (ligne < y)
	{
		col = 0;
		while (col < x)
		{
			if (!corner_cases(x, y, ligne, col))
			{
				if (col == 0 || col == x - 1 || ligne == 0 || ligne == y - 1)
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			col++;
		}
		ligne++;
		ft_putchar('\n');
	}
}
