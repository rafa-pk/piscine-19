/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:14:15 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/07 20:52:48 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg_flag;

	i = 0;
	nb = 0;
	neg_flag = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg_flag++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (!(neg_flag % 2))
		return (nb);
	return (-nb);
}

//int	main(void)
//{
//	char	str[] = " ---+--+1234ab567";
//	
//	printf("%d\n", ft_atoi(str));
//	return (0);
//}
