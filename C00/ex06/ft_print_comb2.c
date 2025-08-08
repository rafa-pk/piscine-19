/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:04:21 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 13:47:39 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(int nb)
{
	char	c;

	c = 0;
	if (nb >= 10)
	{
		c = (nb / 10) + '0';
		write(1, &c, 1);
		c = (nb % 10) + '0';
		write(1, &c, 1);
		return ;
	}
	c = nb + 48;
	write(1, "0", 1);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nb[2];

	nb[0] = 0;
	while (nb[0] <= 98)
	{
		nb[1] = nb[0] + 1;
		while (nb[1] <= 99)
		{
			write_char(nb[0]);
			write(1, " ", 1);
			write_char(nb[1]);
			if (nb[0] != 98 || nb[1] != 99)
				write(1, ", ", 2);
			nb[1]++;
		}
		nb[0]++;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}
