/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:47:12 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/17 12:43:53 by rvaz-da-         ###   ########.fr       */
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
			|| base[i] == '+' || base[i] == '-')
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

int	nbr_count(int temp, char *base_to)
{
	long int	count;
	long int	len;
	long int	nbr;

	count = 1;
	len = ft_strlen(base_to);
	nbr = temp;
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	if (nbr < len)
		return (count);
	while (nbr >= len)
	{
		nbr /= len;
		count++;
	}
	return (count);
}
