/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:38:02 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 13:48:59 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writecomma(int x, int y, int z)
{
	if (x != '7' || y != '8' || z != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				writecomma(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
