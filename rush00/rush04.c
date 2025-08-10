/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-mal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:07:07 by sael-mal          #+#    #+#             */
/*   Updated: 2025/08/10 17:08:55 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	corner_cases(int x, int y, int ligne, int col)
{
	if (col == 0 && ligne == 0)
	{
		ft_putchar('A');
		return (1);
	}
	if (col == 0 && ligne == y - 1)
	{
		ft_putchar('C');
		return (1);
	}
	if (ligne == 0 && col == x - 1)
	{
		ft_putchar('C');
		return (1);
	}
	if (col == x - 1 && ligne == y - 1)
	{
		ft_putchar('A');
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
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			col++;
		}
		ligne++;
		ft_putchar('\n');
	}
}
