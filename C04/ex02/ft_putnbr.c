/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:01:24 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/07 16:12:10 by rvaz-da-         ###   ########.fr       */
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
