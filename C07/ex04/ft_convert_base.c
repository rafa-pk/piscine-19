/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:10:21 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/17 12:51:08 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		base_is_valid(char *str);
void	skip_invalid_portion(char *str, int *i, int *neg_flag);
int		index_inbase(char c, char *base);
int		nbr_count(int temp, char *base_to);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg_flag;
	int	len;
	int	nb;

	i = 0;
	neg_flag = 0;
	len = ft_strlen(base);
	nb = 0;
	skip_invalid_portion(str, &i, &neg_flag);
	while (str[i] && index_inbase(str[i], base) != -1)
	{
		nb *= len;
		nb += index_inbase(str[i], base);
		i++;
	}
	if (neg_flag % 2)
		return (-nb);
	return (nb);
}

char	*putnbr_base(int nbr, char *base, char *converted_nbr, int size)
{
	long int	bnb;
	long int	neg;
	long int	len;

	bnb = nbr;
	neg = 0;
	len = ft_strlen(base);
	converted_nbr[size] = '\0';
	if (bnb == 0)
		converted_nbr[0] = base[0];
	if (bnb < 0)
	{
		neg++;
		bnb = -bnb;
	}
	while (size > 0 && bnb > 0)
	{
		converted_nbr[size - 1] = base[bnb % len];
		bnb /= len;
		size--;
	}
	if (neg)
		converted_nbr[0] = '-';
	return (converted_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp;
	int		buff_size;
	char	*converted_nbr;

	temp = 0;
	buff_size = 0;
	converted_nbr = NULL;
	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (NULL);
	temp = ft_atoi_base(nbr, base_from);
	buff_size = nbr_count(temp, base_to);
	converted_nbr = malloc(sizeof(char) * (buff_size + 1));
	putnbr_base(temp, base_to, converted_nbr, buff_size);
	return (converted_nbr);
}
/*
int	main(void)
{
	char	*nbr = "-+-313 56";
	char	*base_from = "0123456789";
	char	*base_to = "0123456";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	return (0);
}*/
