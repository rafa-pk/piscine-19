/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:47:12 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/12 17:50:05 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			|| base[i] == '+' || base[j] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
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

int	nbr_count(long int *bnb, long int len, long int *neg)
{
	int	count;

	count = 1;
	if (*bnb < 0)
	{
		(*neg)++;
		count++;
		*bnb = -(*bnb);
	}
	if (*bnb < len)
		return (count);
	while (*bnb >= len)
	{
		*bnb /= len;
		count++;
	}
	return (count);
}
