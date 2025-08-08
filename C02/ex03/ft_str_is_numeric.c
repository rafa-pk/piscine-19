/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:03:58 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 11:17:34 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

//int	main(void)
//{
//	char	*str1 = "0123444748";
//	char	*str2 = "12345t67";
//	char	*str3 = "";
//
//	printf("res 1: %d\n", ft_str_is_numeric(str1));
//	printf("res 2: %d\n", ft_str_is_numeric(str2));
//	printf("res 3: %d\n", ft_str_is_numeric(str3));
//	return (0);
//}
