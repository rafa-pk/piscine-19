/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdouny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:04:38 by cdouny            #+#    #+#             */
/*   Updated: 2025/08/24 22:20:04 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == - '-')
			return (1);
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res *= 10;
		res = res + (str[i] - 48);
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	str[] = "   ---+---+1234ab567";
	printf("%d return", ft_atoi(str));
}
*/
