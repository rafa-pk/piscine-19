/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:58:50 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 13:46:54 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	bnb;

	bnb = nb;
	if (bnb < 0)
	{
		ft_putchar('-');
		bnb = -bnb;
	}
	if (bnb >= 10)
	{
		ft_putnbr(bnb / 10);
		ft_putnbr(bnb % 10);
	}
	else
		ft_putchar(bnb + '0');
}

//int	main(void)
//{
//	ft_putnbr(42);
//	ft_putchar('\n');
//	ft_putnbr(-2147483648);
//	return (0);
//}
