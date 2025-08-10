/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:13:43 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/09 19:54:18 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			if ((col == 0 && ligne == 0) || (col == 0 && ligne == y - 1) || (col
					== x - 1 && ligne == 0) || (col == x - 1 && ligne == y -1))
				ft_putchar('o');
			else if ((ligne == 0 || ligne == y - 1))
				ft_putchar('-');
			else if ((col == 0 || col == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ligne++;
		ft_putchar('\n');
	}
}
