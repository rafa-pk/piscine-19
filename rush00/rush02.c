/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:09:54 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/10 17:14:28 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ligne;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	ligne = 0;
	while (ligne < y)
	{
		col = 0;
		while (col < x)
		{
			if ((col == 0 && ligne == 0) || (col == x - 1 && ligne == 0))
				ft_putchar('A');
			else if ((col == 0 && ligne == y - 1)
				|| (col == x - 1 && ligne == y - 1))
				ft_putchar('C');
			else if (ligne == 0 || ligne == y - 1 || col == 0 || col == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ligne++;
		ft_putchar('\n');
	}
}
