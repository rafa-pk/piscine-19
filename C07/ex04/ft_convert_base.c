/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:10:21 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/12 17:50:00 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	base_is_valid(char *str);
int	index_inbase(char c, char *base);
int	nbr_count(long int *bnb, long int len, long int *neg);

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
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg_flag++;
		i++;
	}
	while (str[i] && index_inbase(str[i], base) != -1)
	{
		nb *= len;
		nb += index_inbase(str[i], base);
		i++;
	}
	if (neg_flag)
		return (-nb);
	return (nb);
}

char	*alloc_putnbr_base(int nbr, char *base)
{
	long int	bnb;
	long int	neg;
	long int	len;
	long int	count;
	char		*str_nbr;

	bnb = nbr;
	neg = 0;
	len = ft_strlen(base);
	count = nbr_count(&bnb, len, &neg);
	str_nbr = malloc(sizeof(char) * (count + 1));
	if (!str_nbr)
		return (NULL);
	str_nbr[count] = '\0';
	if (bnb == 0)
	{
		str_nbr[0] = base[0];
		return (str_nbr);
	}
	while ((count - 1)-- >= 0)	//TODO split la fonction pour pouvoir avoir une nouvelle variable
	{
		str_nbr[count - 1] = base[bnb % len];
		bnb /= len;
	}
	if (neg)
		str_nbr[0] = '-';
	return (str_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp;
	char	*converted_nbr;

	temp = 0;
	converted_nbr = NULL;
	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (NULL);
	printf("Base is Valid\n");
	temp = ft_atoi_base(nbr, base_from);
	printf("nb is an int, nbr: %d\n", temp);
	converted_nbr = alloc_putnbr_base(temp, base_to);
	printf("nb has new base, nbr: %s", converted_nbr);
	return (converted_nbr);
}

int	main(void)
{
	char	*nbr = "42";
	char	*base_from = "0123456789";
	char	*base_to = "01";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
