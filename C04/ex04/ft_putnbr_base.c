/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:42:51 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/08 11:14:33 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if ((base[i] >= 0 && base[i] <= 32) || base[i] == 126
			|| base[i] == '+' || base[i] == 'j')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	bnb;
	long int	len;

	bnb = nbr;
	len = ft_strlen(base);
	if (base_is_valid(base))
	{
		if (bnb < 0)
		{
			ft_putchar('-');
			bnb = -bnb;
		}
		if (bnb >= len)
		{
			ft_putnbr_base(bnb / len, base);
			ft_putnbr_base(bnb % len, base);
		}
		else
			ft_putchar(base[bnb]);
	}
}
/*
int	main(void)
{
	char	base[] = "01-234+56789";
	char	base2[] = "01";
	char	base3[] = "0123456789abcdef";
	char	base4[] = "poneyvif";

      ft_putnbr_base(-2147483648, base);
      ft_putnbr_base(42, base2);
      ft_putnbr_base(0, base3);
      ft_putnbr_base(-89, base4);
	return (0);
}*/
