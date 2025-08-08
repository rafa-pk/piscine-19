/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:04:18 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/08 10:58:05 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
			|| base[i] == '+' || base[i] == '-')
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

void	skip_invalid_portion(char *str, int *i, int *neg_flag)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			(*neg_flag)++;
		(*i)++;
	}
}

int	index_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	len;
	int	neg_flag;

	i = 0;
	nb = 0;
	len = ft_strlen(base);
	neg_flag = 0;
	if (base_is_valid(base))
	{
		skip_invalid_portion(str, &i, &neg_flag);
		while (index_inbase(str[i], base) != -1)
		{
			nb *= len;
			nb += index_inbase(str[i], base);
			i++;
		}
	}
	if (!(neg_flag))
		return (nb);
	return (-nb);
}

//int	main(void)
//{
//	char	str[] = " ---+--+1234ab567";
//	char	base[] = "0123456789abcdef";
//
//	printf("\n\ninput: %s\n, base: %s\n\n", str, base);
//	printf("out nb: %d", ft_atoi_base(str, base));
//	return (0);
//}
